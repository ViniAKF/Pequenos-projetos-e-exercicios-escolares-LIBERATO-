#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#pragma comment (lib, "winmm.a")


    struct wav{

        char ChunkID[4];
        int ChunkSize;
        char Format[4];
        char Subchunk1ID[4];
        int Subchunk1Size;
        char AudioFormat[2];
        short NumChannels;
        int SampleRate;
        int ByteRate;
        char BlockAlign[2];
        short BitsPerSample;
        char Subchunk2ID[4];
        int Subchunk2Size;
}audio;

char musica[100];
int op;

int main()
{

    do{
        printf("Qual musica voce deseja selecionar? .wav");
        gets(musica);

        //Abrindo arquivo padrão
        FILE *fp1;
        fp1 = fopen(musica,"rb");

        printf("\n Escolha uma opção: \n");
        printf("0-Sair \n");
        printf("1-Ouvir o audio");
        printf("\n2-Cortar o audio");
        printf("\n3-Alterar o volume");
        printf("\n4-Alterar a velocidade de reprodução");
        scanf("%i",&op);
        fflush(stdin);


        switch(op){

    case 1:

        fread(&audio, sizeof(audio), 1, fp1);

        PlaySound(TEXT(musica), NULL, SND_ASYNC);
        printf("Pressione qualquer tecla!\n");
        getch();

        break;

    case 2:{

        float inicio,fim;
        short sample, sample2=0;

        printf("\nInicio do corte:\n");
        scanf("%f", &inicio);

        inicio = inicio * audio.SampleRate * audio.NumChannels;

        printf("Fim do corte:\n");
        scanf("%f", &fim);

        fim = fim * audio.SampleRate * audio.NumChannels;

        printf("\n Começo da musica em %.0f", inicio);
        printf("\n Fim em %.0f", fim);

        audio.Subchunk2Size = ((fim - inicio - 1) * audio.NumChannels);
        audio.ChunkSize = 36 + audio.Subchunk2Size;
        FILE * fp2;
        fp2 = fopen("AudioNovo2.wav", "wb");
        fwrite(&audio, sizeof(audio), 1, fp2);
        while (fread(&sample, sizeof(sample), 1, fp1)) {

            sample2++;

            if (inicio < sample2 && fim > sample2)
                fwrite(&sample, sizeof(sample), 1, fp2);
        }
        PlaySound(TEXT("AudioNovo2.wav"), NULL, SND_ASYNC);
        fclose(fp2);
        getch();


        }break;

        case 3:{

        float volume;
        short sample;

        printf("\nQuantos por cento de volume vcê quer mudar?");
        scanf("%f",&volume);
        volume=volume/100;

        FILE * fp2;
        fp2 = fopen("AudioNovo","wb");
        fwrite(&audio, sizeof(audio), 1, fp2);

        while(fread(&sample, sizeof(sample), 1, fp1))
        {
            sample=sample*volume;
            fwrite(&sample, sizeof(sample), 1, fp2);

        }

        printf("Musica Alterada");
        PlaySound(TEXT("AudioNovo.wav"), NULL, SND_ASYNC);
        printf("Pressione qualquer tecla!\n");
        fclose(fp2);
        getch();
        }
        break;
        }

        fclose(fp1);

    }while(op!=0);
}
