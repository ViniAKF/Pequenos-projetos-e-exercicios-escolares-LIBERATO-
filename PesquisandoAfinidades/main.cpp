#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
/*
TA OLHA AQUI, QUAL É MINHA IDEIA

Colocar as variaveis tudo numa matriz, a qual ficaria salva como mais ou menos


\\   0                \\    3
PESSOA            ..... ESPORTE

pessoa[0].nome          pessoa[0].esporte

pessoa[1].nome          pessoa[1].esporte

....


DAI, QND TENQ PESQUISAR AFINIDADES, SELEONA UMA COLUNA (ESPORTE POR EX) E É SÓ IR MECHENDO NAS LINHAS.
NO PESQUISANDO, A PESSOA DIGITA O NUMERO DIRETO DO LUGAR ONDE TA NA MATRIZ JA, PRA FICAR MAIS FACIL, DAI JA SELECIONA
DIGITE 3 PARA O ESPORTE
scanf y
printf("%s",mat[0][y]);
for(int i=0 i++
mat[i][y]

DAI N PRECISA FAZER UM IF PRA CADA AFINIDADE




*/



//char mat[650][100]; // aqui eu tava pensando, 650 strings , com 100 espaços para digitar

FILE *fp;


typedef struct nascimento{
int dia;
int mes;
int ano;
}data;

int i=-1;
int op,afin,pesq;
char pesquisados[50];

struct caracteristicas{
char nome[50];
nascimento data; //sem barra
char email[50];
char telefone[50]; //sem () nem -
char time[50];
char equipe_gincaneira[50];
char esportes[50];
char hobby[50];
char profissao[50];
char cidade[50];
char num_irmaos[50]; //quantos irmaos voce tem
char status[50]; // casada, solteiro...
char residencia[50]; //mora em casa, apartamento...
int idade[50];
char marca[50]; //qual masrca d roupa
char carro[50];
};

typedef struct caracteristicas caracteristicas;
caracteristicas pessoa[50];

char cadastrando(){
int para;
do{
    i++;
    printf("\n---------- Pessoa %i -----------\n", i+1);
    printf("\nNome:");
        gets(pessoa[i].nome);
    printf("\nDia em que nasceu:");
        scanf("%i", &pessoa[i].data.dia);
        fflush(stdin);
    printf("\nMes::");
        scanf("%i", &pessoa[i].data.mes);
        fflush(stdin);
    printf("\nAno:");
        scanf("%i", &pessoa[i].data.ano);
        fflush(stdin);
    printf("\nDigite seu email:");
        gets(pessoa[i].email);
    printf("\n Telefone(com parenteses(ddd) e traço):");
        gets(pessoa[i].telefone);
    printf("\nTime que torce:");
        gets(pessoa[i].time);
    printf("\nEquipe gincaneira:");
        gets(pessoa[i].equipe_gincaneira);
    printf("\nEsporte que pratica/gosta:");
        gets(pessoa[i].esportes);
    printf("\nHobby:");
        gets(pessoa[i].hobby);
    printf("\nProfissão:");
        gets(pessoa[i].profissao);
    printf("\nCidade onde mora:");
        gets(pessoa[i].cidade);
    printf("\nQuantos irmãos voce tem:");
        gets(pessoa[i].num_irmaos);
    printf("\nStatus(casado,solteiro...):");
        gets(pessoa[i].status);
    printf("\nMora em (Casa, apartamento):");
        gets(pessoa[i].residencia);
    printf("\n Idade:");
        scanf("%i", &pessoa[i].idade);
        fflush(stdin);
    printf("\nMarca de roupa que gosta:");
        gets(pessoa[i].marca);
    printf("\nCarro que gosta:");
        gets(pessoa[i].carro);



/* nao sabia mais oq fazer ent travei, dava erro dizendo q n dava d char[7] para char [100] por ex, mas era assim q tinha visto no site
        //PASSANDO PARA UMA MATRIZ SÓ COM AS AFINIDADES

        mat[0][]="Pessoa";
        mat[1]="Time";
        mat[2]="Equipe Gincaneira";
        mat[3]="Esportes";
        mat[4]="Hobby";
        mat[5]="Profissao";
        mat[6]="Cidade";
        mat[7]="Numero de irmaos";
        mat[8]="Status"
        mat[9]="Residencia";
        mat[10]="Idade";
        mat[11]="Marca"
        mat[12]="Carro"
        for(int i=0;i<13;i++){
        printf("%s",mat[i]);
        }






*/


        // Passando para um arquivo

        fp=fopen("agenda.txt","a+t");

        fprintf(fp, "\n---------- Pessoa %i -----------\n", i+1);
        fprintf(fp, "\nNome: %s",pessoa[i].nome);
        fprintf(fp, "\nData de Nascimento: %i/%i/%i",pessoa[i].data.dia, pessoa[i].data.mes, &pessoa[i].data.ano);
        fprintf(fp, "\nEmail: %s", pessoa[i].email);
        fprintf(fp,"Telefone: %s", pessoa[i].telefone);
        fprintf(fp, "\nTime: %s", pessoa[i].time);
        fprintf(fp, "\nEquipe gincaneira: %s", pessoa[i].equipe_gincaneira);
        fprintf(fp,"\nEsporte: %s", pessoa[i].esportes);
        fprintf(fp, "\nHobby: %s", pessoa[i].hobby);
        fprintf(fp, "\nProfissão: %s", pessoa[i].profissao);
        fprintf(fp, "\nCidade: %s", pessoa[i].cidade);
        fprintf(fp, "\Numero de irmaos: %s", pessoa[i].num_irmaos);
        fprintf(fp, "\nStatus: %s", pessoa[i].status);
        fprintf(fp, "\nMora em: %s", pessoa[i].residencia);
        fprintf(fp,"\nIdade: %i", pessoa[i].idade);
        fprintf(fp, "\nMarca: %s", pessoa[i].marca);
        fprintf(fp, "\nCarro: %s", pessoa[i].carro);

        fclose(fp);


printf("Deseja continuar cadastrando? Digite zero para parar ou 1 para continuar.");
scanf("%i",&para);
}while(para!=0);




}

char pesquisando(){
do{
printf("Por qual afinidade você deseja procurar? Digite o numero:\n1-Time\n2-Equipe Gincaneira\n3-Esportes\n4-Hobby\n5-Profissao\n6-Cidade\n7-Numero de irmaos\n8-Status\n9-Residencia\n10-Idade\n11-Marca\n12-Carro\n");
scanf("%i",&afin);

if(afim=1){
printf("DIgite por qual time voce deseja procurar");

}
else{
printf("Digite um numero dentro dos relacionados")
}

printf("Deseja continuar pesquisando? Digite: \n1-Sim\n0-Nao")
scanf("%i",&pesq);
}while(pesq!=0);
}


int main()
{
do{
    printf("Digite: \n 0 - Para parar o programa \n 1 - para cadastrar novos usuarios \n 2 - Pesquisar usuarios conforme informação \n 3 - Gerar uma tabela de afinidade entre os individuos");
    scanf("%i",&op);
    fflush(stdin);
    switch(op){
case 0:
    return 0;
    break;
case 1:
    cadastrando();
    break;
case 2:
    pesquisando();
    break;




    }


}while(op!=0);

}
// converter para tudo minusclo, to upper tu lower


