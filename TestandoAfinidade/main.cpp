#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


typedef struct nascimento{
int dia;
int mes;
int ano;
}data;

int op;
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
int idade;
char marca[50]; //qual masrca d roupa
char carro[50];
};

typedef struct caracteristicas caracteristicas;
caracteristicas pessoa;

char cadastrando(){
int para;
do{
    printf("\n---------- Nova Pessoa -----------\n");
    printf("\nNome:");
        gets(pessoa.nome);
    printf("\nDia em que nasceu:");
        scanf("%i", &pessoa.data.dia);
        fflush(stdin);
    printf("\nMes::");
        scanf("%i", &pessoa.data.mes);
        fflush(stdin);
    printf("\nAno:");
        scanf("%i", &pessoa.data.ano);
        fflush(stdin);
    printf("\nDigite seu email:");
        gets(pessoa.email);
    printf("\n Telefone(com parenteses(ddd) e traço):");
        gets(pessoa.telefone);
    printf("\nTime que torce:");
        gets(pessoa.time);
    printf("\nEquipe gincaneira:");
        gets(pessoa.equipe_gincaneira);
    printf("\nEsporte que pratica/gosta:");
        gets(pessoa.esportes);
    printf("\nHobby:");
        gets(pessoa.hobby);
    printf("\nProfissão:");
        gets(pessoa.profissao);
    printf("\nCidade onde mora:");
        gets(pessoa.cidade);
    printf("\nQuantos irmãos voce tem:");
        gets(pessoa.num_irmaos);
    printf("\nStatus(casado,solteiro...):");
        gets(pessoa.status);
    printf("\nMora em (Casa, apartamento):");
        gets(pessoa.residencia);
    printf("\n Idade:");
        scanf("%i", &pessoa.idade);
        fflush(stdin);
    printf("\nMarca de roupa que gosta:");
        gets(pessoa.marca);
    printf("\nCarro que gosta:");
        gets(pessoa.carro);


        // Passando para um arquivo TEXTO
        FILE *ft;

        ft=fopen("agenda.txt","a+t");

        if(ft==NULL){
        printf("\nErro para abrir o arquivo");

        }else{

        fprintf(ft, "\n------------ %s -----------",pessoa.nome);
        fprintf(ft, "\nData de Nascimento: %i/%i/%i",pessoa.data.dia, pessoa.data.mes, pessoa.data.ano);
        fprintf(ft, "\nEmail: %s", pessoa.email);
        fprintf(ft,"Telefone: %s", pessoa.telefone);
        fprintf(ft, "\nTime: %s", pessoa.time);
        fprintf(ft, "\nEquipe gincaneira: %s", pessoa.equipe_gincaneira);
        fprintf(ft,"\nEsporte: %s", pessoa.esportes);
        fprintf(ft, "\nHobby: %s", pessoa.hobby);
        fprintf(ft, "\nProfissão: %s", pessoa.profissao);
        fprintf(ft, "\nCidade: %s", pessoa.cidade);
        fprintf(ft, "\nNumero de irmaos: %s", pessoa.num_irmaos);
        fprintf(ft, "\nStatus: %s", pessoa.status);
        fprintf(ft, "\nMora em: %s", pessoa.residencia);
        fprintf(ft,"\nIdade: %i", pessoa.idade );
        fprintf(ft, "\nMarca: %s", pessoa.marca);
        fprintf(ft, "\nCarro: %s", pessoa.carro);

        fclose(ft);
}
        //Passando para um arquivo BINARIO
        FILE *fb;
        fb = fopen ("Arq_bin","a+b");
        if(fb==NULL){
            printf("\nErro para abrir o arquivo");
        }else{
        fwrite(&pessoa, sizeof(caracteristicas),1,fb);
        if(ferror(fb))
            printf("\nErro na gravação");
        else{
            printf("\nGravação Concluida");
        }
        if(fclose(fb)){
            printf("\nErro ao fechar arquivo");
        }else{
            printf("\nFechado com sucesso");
        }

        }


printf("\nDeseja continuar cadastrando? Digite zero para parar ou 1 para continuar.");
scanf("%i",&para);
fflush(stdin);
}while(para!=0);

}


char pesquisando(){
    int info,deseja,opa;
    char pesq[30];
    do{
    printf("\nDigite a opcao que deseja buscar");
    printf("\n1-Time \n2-Equipe Gincaneira \n3-Esportes \n4-Hobby \n5-Profissao \n6-Cidade \n7-Numero de irmaos \n8- status \n9-Residencia \n10-Idade \n11-Marca \n12-Carro");
    scanf("%i", &info);
    fflush(stdin);

    switch(info){

    case 1:
        printf("Por qual time voce deseja pesquisar?");
        gets(pesq);

         for(int i=0;pesq[i]!='\0';i++){
            pesq[i]= toupper(pesq[i]);
         }

        FILE *fb;
        fb=fopen("Arq_bin","rb");

        if(fb==NULL){
            printf("\nErro para abrir o arquivo");
        }else{
            printf("\nUSUARIOS QUE TORCEM PARA O %s",pesq);
                while(fread(&pessoa,sizeof(caracteristicas),1,fb)==1){


                if(ferror(fb)){
                    printf("Erro na leitura do arquivo");
                }else{
                          for(int i=0;pessoa.time[i]!='\0';i++){
            pessoa.time[i]=toupper(pessoa.time[i]);
         }


opa= strcmp(pesq,pessoa.time);
printf("\n%i", opa);


                 if(strcmp(pesq,pessoa.time)==0){
                    printf("\n---> %s",pessoa.nome);
                 }else{
                 printf("deu merda e %s", pessoa.time);
}

                }
                }
fclose(fb);
        }
        break;
    case 2:
        printf("Por qual equipe gincaneira voce deseja pesquisar?");
        gets(pesq);
        break;
    case 3:
        printf("Por qual esporte voce deseja pesquisar?");
        gets(pesq);
        break;
    case 4:
        printf("Por qual hobby voce deseja pesquisar?");
        gets(pesq);
        break;
    case 5:
        printf("Por qual profissao voce deseja pesquisar?");
        gets(pesq);
        break;
    case 6:
        printf("Por qual cidade voce deseja pesquisar?");
        gets(pesq);
        break;
    case 7:
        printf("Por qual numero de irmaos voce deseja pesquisar?");
        gets(pesq);
        break;
    case 8:
        printf("Por qual status voce deseja pesquisar?");
        gets(pesq);
        break;
    case 9:
        printf("Por qual residencia voce deseja pesquisar?");
        gets(pesq);
        break;
    case 10:
        printf("Por qual idade voce deseja pesquisar?");
        gets(pesq);
        break;
    case 11:
        printf("Por qual marca voce deseja pesquisar?");
        gets(pesq);
        break;
    case 12:
        printf("Por qual carro voce deseja pesquisar?");
        gets(pesq);
        break;
    default:
        printf("\nDigite uma opcao dentro das informadas");
    }
    printf("\nDeseja continuar pesquisando?\nNao -> 0 \n Sim-> 1");
    scanf("%i",&deseja);
    }while(deseja!=0);
}



int main()
{
do{
    printf("\nDigite: \n 0 - Para parar o programa \n 1 - para cadastrar novos usuarios \n 2 - Pesquisar usuarios conforme informação \n 3 - Gerar uma tabela de afinidade entre os individuos");
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


