#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

#define TAM 10
char frase[100];
char * pnt;
int num=0,nume=0,op;
char mat[TAM][TAM];
char * pont;
int maior=0;
int menor=0;


void imprime(char * pnt){
printf("frase invertida = ");
    for(int i=0;i<num;i++)
        printf("%c",*pnt++);
}



void troca(char * pnt){
    for(;*pnt!='\0';pnt++){
        switch(*pnt){
            case 'a':
                *pnt='u';
                break;
            case 'e':
                *pnt='o';
                break;
            case 'i':
                *pnt='u';
                break;
            case 'o':
                *pnt='a';
                break;
            case 'u':
                *pnt = 'e';
                break;
        }
        num++;
    }
    pnt=pnt-num;
}


void inicializa(char * pont){
    for(int i=0;i<TAM*TAM;i++){
        *pont=rand()%201; // para pegar o zero tbm
        nume++;
        pont++;
}
pont=pont-nume;
nume=0;
}

void exibe(char * pont){
for(int x=0;x<TAM;x++){
    printf("\n");
 for(int y=0;y<TAM;y++){
        printf(" %3i ",*pnt++);
nume++;

        }
    }
    pont=pont-nume;
    nume=0;
}

void procura(char * pont){
    for(int i=0;i<TAM*TAM;i++)
    if(*pont<menor)
        menor=*pont;
    if(*pont>maior)
        maior=*pont;
    pont++;
printf("\nO maior valor é %i\nO menor valor é %i",maior,menor);

}


int main()
{
do{
    printf("digite 0 para encerrar, 1 para trocar e 2 para matriz");
    scanf("%i",&op);
    fflush(stdin);
    printf("%i", op);

    if(op==1){
        printf("Digite uma frase");
        gets(frase);
        pnt=frase;

        troca(pnt);
        imprime(pnt);
    }

    if(op==2){

        pont=&mat[0][0];

        inicializa(pont);
        exibe(pont);
        procura(pont);
}
}while(op!=0);

}
