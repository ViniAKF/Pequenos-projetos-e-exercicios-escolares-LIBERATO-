#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

#define LIN 15
#define COL 15
// Tu define isso pq dependendo do q o usuario decidir qeu vai ser o tamanho da matriz, ou se tu alterar no meio do programa, pode dar erro pois ele n sabe qnt espaço "reservar" para a matriz. se quiser usar assim9com o usuario escolhendo) tem que reservar o espaço com malloe
// A matriz esta salva na maquina linearmente, e o jeito que ela anda é de linha e dps p coluna por exemplo, mat[0][0] vai ta no sistema no espaço 263 do sistema, dai amatriz[1][0] no sitema vai ta no 264, andando assim pra esquerda e depois vindo pra baixo.
//daí se quisesse trabalhar com em q linha ta ou em q coluna, salva em que endereço ta o primeiro e diminui do ultimo, assim é só dividir ou achar o resto.


int main()
{
    int op=0;

    //deixando o rand diferente em todas ocasiões
    unsigned  seed = time(0);
    srand(seed);


    do{
    printf("Escolha o que você deseja fazer");
    printf("1-Ver uma matriz 8x8 e modificada a borda \n 2- Para ver uma matriz 31x31 completada por numeros aleatórios menores que 20 onde as ultimas linhas ou colunas é a soma de todas as outras \n 3- Para ver uma matriz 15x15 com números aleatórios menores que 2000 e ver quais são os maiores e menores numeros dela");
    scanf



    /*
    int x,y;
char mat[8][8];

for(x=0; x<8;x++){

printf("\n");

    for(y=0;y<8;y++){
        mat[x][y]= 'a';

        printf("%c", mat[x][y]);
    }
}
printf("\n\n\n\n");

//deixando a borda diferente

for(x=0; x<8;x++){


printf("\n");
    for(y=0;y<8;y++){
            if(y==0||y==7||x==0||x==7){
        mat[x][y]= 'x';

        printf("%c", mat[x][y]);}
        else{
            mat[x][y]= 'a';

        printf("%c", mat[x][y]);
        }
        }
    }
    */
printf("\n");
//1-Preencha uma matriz 31x31 com numeros aleatorios menores que 20.
//2-Na ultima coluna voce devera colocar o somatorio de todos os 30 elementos anteriores daquela linha.
//3-Na ultima coluna voce deve colocar a soma de todos  os elementos daquela linha

int triz[31][31];

// 1 -
for(int x = 0; x<30; x++){
    printf("\n");

    for(int y=0; y<30; y++){
    triz[x][y] = rand()%20 +1;

    printf("%02i ", triz[x][y]);
}
}
printf("\n\n\n\n\n\n");
// 2 -
    int soma = 0;
    int y=0;

    //fazendo a soma das linhas
for(y=0;y<30;y++){
    soma=0;
for(int x=0;x<30;x++){
    soma+=triz[y][x];
    }
    triz[y][30]=soma;
}

for(y=0;y<30;y++){
    soma=0;
for(int x=0;x<30;x++){
    soma+=triz[x][y];
    }
triz[30][y]=soma;
}






//fazendo soma das colunas

    for(int x = 0; x<31; x++){
        printf("\n");

    for(int y=0; y<31; y++){
        if(x==30 && y==30)
            printf("SOMAS");
        else
            printf("%03i ", triz[x][y]);
}
}





// Gere uma matriz 15 por 15
//numeroso aleatoios maiores que 2000
//mostrar qual/s é os maior/es e o menor/es





















//faça tudo isso dps mas com ponteiros
}while(op!=0);
}
