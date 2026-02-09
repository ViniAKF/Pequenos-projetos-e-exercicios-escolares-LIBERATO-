#include <stdio.h>
#include <conio.h>

int op,num;
char hex;


int main()
{

printf("Voce tem as seguintes opcoes: \n Digite 1 para encerrar \n Digite 2 para converter um numero decimal para um hexadecimal \n Digite 3 para converter um numero hexadecimal para um decimal \n Digite 4 para converter um numero decimal para um octal \n Digite 5 para converter um numero octal para decimal \n");
    scanf("%i", &op);

switch(op){

    case 1:
        printf("Programa encerrado");
        return 0;
break;

    case 2:
        printf("Digite um numero decimal");
            scanf("%d",&num);
        printf("Numero em hexadecimal: %x", num);
break;

    case 3:
        printf("Digite um numero hexadecimal");
            scanf("%x", &hex);
        printf("Numero em decimal: %d", hex);
break;

    case 4:
        printf("Digite um numero decimal");
            scanf("%d", &num);
        printf("Numero em octal: %o", num);
break;

    case 5:
        printf("Digite um numero octal");
            scanf("%o", &hex);
        printf("Numero em decimal: %d", hex);
break;

    default:
        printf("digite um numero dentro das opcoes");
break;

    }
}
