#include <stdio.h>
#include <conio.h>



int x,j,i;




char parar, enter;

int main()
{

    struct all {
    int idade;
    float peso;
    char nome[60];
    };

    struct all pessoas[50];

    printf("Digite / para parar ou enter para continuar\n");
    for(x=0;x<=50;x++){
    parar = getch();
    if(parar=='/')
        break;
    else{
        printf("Digite o nome da pessoa %i \n", x);
        gets(pessoas[x].nome);

        printf("Digite a idade da pessoa %i \n", x);

    // enter nao ta funcionando(tenq clicar 2 vezes)

        scanf("%i", &pessoas[x].idade);
fflush(stdin);
    i++;
    }
    }
    // Fazer com que ele leia quantas variaveis teve ali em cia e use aqui em baixo
    printf("Os nomes e as idades sao os seguintes:\n");
    for(int j=0; j<i; j++){
       printf("%s --- ",pessoas[j].nome);
       printf("%i\n", pessoas[j].idade);
    }

}
