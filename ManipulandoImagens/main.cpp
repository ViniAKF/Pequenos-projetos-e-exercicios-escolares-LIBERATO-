#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

#pragma pack(1);
struct bitfile
{
    char signa[2];
    unsigned int Fsize;
    unsigned int reservado;
    unsigned int dataoff;
} Fheader;

#pragma pack(1);
struct bitinfo{
    unsigned int Isize;
    int Iwidth;
    int Iheight;
    unsigned short Iplane;
    unsigned short Ibitcount;
    unsigned int Icompression;
    unsigned int ImageSize;
    unsigned int pixelX;
    unsigned int pixelY;
    unsigned int Icolorsuse;
    unsigned int Icolorimp;
} Iheader;

#pragma pack(1);
struct colors{
    char  B;
    char  G;
    char R;
} rgb;

// Função para verificar se o pixel (x, y) está dentro da área da frase "BOAS FESTAS"
int isInTextArea(int x, int y) {
    // Defina a posição de "BOAS FESTAS" na imagem
    // Coordenadas de início da frase, pode ajustar conforme necessário
    int startX = 50;  // Coordenada inicial da letra 'B'
    int startY = 100; // Coordenada inicial na linha vertical
    int widthText = 120; // Largura da área da frase
    int heightText = 20; // Altura da área da frase

    // Verifique se o pixel está dentro da área da frase
    return (x >= startX && x <= startX + widthText && y >= startY && y <= startY + heightText);
}

int main() {
    int op;
    char imagem[100];

    printf("Qual imagem você deseja abrir?");
    gets(imagem);

    FILE *fp;
    fp = fopen(imagem, "rb");

    fread(&Fheader, sizeof(Fheader), 1, fp);
    fread(&Iheader, sizeof(Iheader), 1, fp);

    printf(" %c%c      -    Name", Fheader.signa[0], Fheader.signa[1]); //BM
    printf("\n  %d     -    Size", Fheader.Fsize);
    printf("\n  %d     -    Image Offset", Fheader.dataoff);
    printf("\n  %d     -    Header Size", Iheader.Isize);
    printf("\n  %d     -    Width", Iheader.Iwidth);
    printf("\n  %d     -    Height", Iheader.Iheight);
    printf("\n  %d     -    Color Planes", Iheader.Iplane);
    printf("\n  %d     -    Bits per Pixel", Iheader.Ibitcount);
    printf("\n  %d     -    Compression", Iheader.Icompression);
    printf("\n  %d     -    Image Size \n", Iheader.ImageSize);

    printf("\nEscolha uma opção:");
    printf("\n0-Para sair");
    printf("\n1-Mudar completamente para vermelho");
    printf("\n2-Mudar completamente para azul");
    printf("\n3-Mudar completamente para verde");
    printf("\n4-Mudar completamente para cinza");
    printf("\n5-Cortar a imagem");
    printf("\n6-Especial");
    scanf("%d", &op);

    switch (op) {
        case 0: {
            break;
        }
        case 6: {
            FILE *fp6;
            fp6 = fopen("especial.bmp", "wb");

            fwrite(&Fheader, sizeof(Fheader), 1, fp6);
            fwrite(&Iheader, sizeof(Iheader), 1, fp6);

            // Configuração para a mudança para preto (R=0, G=0, B=0)
            int red = 0, green = 0, blue = 0;

            int x = 0, y = 0;
            int width = Iheader.Iwidth;
            while (fread(&rgb, sizeof(rgb), 1, fp)) {
                // Verifique se o pixel (x, y) está dentro da área da frase "BOAS FESTAS"
                if (isInTextArea(x, y)) {
                    // Se estiver dentro da área, troque a cor para preto
                    rgb.R = red;
                    rgb.G = green;
                    rgb.B = blue;
                }
                fwrite(&rgb, sizeof(rgb), 1, fp6);

                x++;
                if (x == width) {
                    x = 0;
                    y++;
                }
            }

            fclose(fp6);
            fclose(fp);
            printf("Pronto! A imagem foi modificada com a frase BOAS FESTAS em preto.\n");
            break;
        }
    }

    fclose(fp);
}
