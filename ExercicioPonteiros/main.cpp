#include <conio.h>
#include <stdio.h>

void troca (int *p1, int *p2)
{
    int c = *p1;
    *p1=*p2;
    *p2=c;
}

void ordena (int *num1, int *num2, int *num3){
             int maior = 2, segmaior = 1, menor = 0;
             for(int i =0; i <= 3; i++){
                if(*num1 > *num2){

                    if (*num3 > *num1){
                    *num3=maior;
                 *num1 = segmaior;
                *num2 = menor;

}
                    else if(*num3 < *num1){

                        if (*num3 > *num2){
                        *num1=maior;
                       *num3 = segmaior;
                        *num2=menor;

}                        else if(*num2 > *num3){
                        *num1 = maior;
                        *num2 = segmaior;
                        *num3 = menor;
                        }
    }

                    else if (*num3 = *num1){
                        *num3 = maior;
                        *num1= maior;
                        *num2= segmaior;
}
             }
                else if(*num2 > *num1){
                        if (*num3 > *num2){
                    *num3=maior;
                 *num2 = segmaior;
                *num1 = menor;

}
                    else if(*num3 < *num2){

                        if (*num3 > *num1){
                        *num2=maior;
                       *num3 = segmaior;
                        *num1=menor;
}
                        else if(*num1 > *num3){
                        *num2 = maior;
                        *num1 = segmaior;
                        *num3 = menor;
    }
}

                    else if (*num3 = *num2){
                        *num3 = maior;
                        *num2= maior;
                        *num1= segmaior;
            }
        }

    }
}

void lixo(void)
{
    float vet[5] = {1.1,2.2,3.3,4.4,5.5};
    float *f;
    int i;
    f = vet;
    printf("contador/valor/valor/endereco/endereco");
    for(i = 0 ; i <= 4 ; i++)
    {
        printf("\ni = %d",i);
        printf(" vet[%d] = %.1f",i, vet[i]);
        printf(" *(f + %d) = %.1f",i, *(f+i));
        printf(" &vet[%d] = %X",i, &vet[i]);
        printf(" (f + %d) = %X",i, f+i);


    }
}


int main()
{
    int op;
    do
    {

        printf("\nDigite \n0 para encerrar o programa \n1 para digitar dois valores e trocar eles \n2 para ordenar os valores digitados em ordem crescente ou decrescente");
        scanf("%d",&op);
        fflush(stdin);
        int *p1,*p2,*num1,*num2,*num3;
        switch(op)
        {
        case 1:
            printf("Digite um numero\n");
            scanf("%i", &p1);
            fflush(stdin);
            printf("Digite o segundo numero\n");
            scanf("%i", &p2);
            fflush(stdin);
            printf("Numeros digitados: \n%i \n%i\n",*p1,*p2);
            troca(&p1,&p2);
            printf("Numeros, agora trocados: \n%i \n%i\n",*p1,*p2);
            break;

        case 2:
            printf("\nDigite 3 numeros \n");
            scanf("%i", &num1);
            scanf("%i", &num2);
            scanf("%i", &num3);
            ordena(&num1,&num2,&num3);
            if(num1==0)
            printf("%i", num1);
            printf("%i,%i,%i",*num1,*num2,*num3);
            break;

        case 3:

        }

    }
    while(op!=0);
}

