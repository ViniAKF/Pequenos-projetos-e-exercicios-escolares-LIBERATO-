#include <stdio.h>
#include <conio.h>
#include <stdlib.h>



int main()
{
    struct pessoa{
    char nome[30];
    int idade;
    float peso;
    float altura;
    };
    typedef struct pessoa pessoa;
    pessoa matriz[50];

    int num=0;


    for(int i=0;i<50;i++){
    int j=i+1;
    printf("\n----------------Pessoa (%i)----------------------", j);
    printf("\nDigite o nome");
        scanf("%30[^\n]s",&matriz[i].nome); //SCANF PARA LER OS ESPAÇOS TAMBEM
        fflush(stdin);
    printf("\nDigite a idade");
        scanf("%i", &matriz[i].idade);
        fflush(stdin);
    printf("\nDigite o peso  |||  Ou 250 para encerrar a passagem de dados");
        scanf("%f", &matriz[i].peso);
        fflush(stdin);

    if(matriz[i].peso==250){
        break;
    }
    printf("\nDigite a altura");
        scanf("%f",&matriz[i].altura);
        fflush(stdin);

    num++;
    }
    printf("%i", num);
    system("cls");

    for(int i=0;i<num;i++){
                int j=i+1;

        printf("\n----------------Pessoa (%i)----------------------",j);
        printf("\n Nome: %s \n Idade: %i \n Peso: %0.2f \n Altura: %0.2f \n" , matriz[i].nome, matriz[i].idade, matriz[i].peso, matriz[i].altura);
    }

    int PesMenorAltura[10];
    int PesmMaiorPeso[10];
    int PesMenorIdade[10];
    int MenorAltura=matriz[0].altura;
    int MaiorPeso=matriz[0].peso;
    int MenorIdade=matriz[0].idade;
    int k=0;
     int l=0;
    for(int i=1;i<num;i++){
            if(matriz[i].altura<MenorAltura){
                MenorAltura=matriz[i].altura;
            }
}
    for(int i=0;i<num;i++){
            if(matriz[i].altura==MenorAltura){
                PesMenorAltura[k]=i;
                k++;
            }


}

    PesMenorAltura[k]='\0';
    for(int i=0;PesMenorAltura[i]!='\0';i++){
    printf("\n -----PESSOA/S DE MENOR/ES ALTURA/S----- \n Pessoa %i \n Nome: %s \n Idade: %i \n Peso: %0.2f \n Altura: %0.2f \n", PesMenorAltura[i]+1, matriz[PesMenorAltura[i]].nome, matriz[PesMenorAltura[i]].idade, matriz[PesMenorAltura[i]].peso, matriz[PesMenorAltura[i]].altura);
    }
return 0;
}
