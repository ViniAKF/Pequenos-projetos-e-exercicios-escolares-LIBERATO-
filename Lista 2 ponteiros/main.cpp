

#include <stdio.h>
#include <conio.h>
#include <string.h>

//Função : Inverte a ordem dos caracteres na string str


/*

void inverte(char * str){
int  tamanho;

tamanho = strlen(*str);
printf("%i",tamanho);
for(int i = 0; i<tamanho; i++){
        str[i]=str[tamanho-i];

}




}



int main()
{
    char * str;
printf("Digite uma palavra para que seus caracteres se invertam\n");
scanf("&s", &str);
fflush(stdin);

inverte(&str);
printf("Esta é a frase que você digitou, invertida: %s", *str);


}

*/


//Segunda tentativa sem olhar ne na de cima (Depois de conversar com o nicolas e ver o jeito certo, só n no mesmo dia) em meiaa hora
//Função : Inverte a ordem dos caracteres na string str

void inverte(char *pnt){ //NÃO FUNCIONA QUANDO TEM ESPAÇO PQ???
    //ta repetindo a primeira letra na frente || tentei colocar q tamanho era tamannho -1 mas n mudo nada (ent acho q ta levemente errado, pois tinha q ta tamanho -1)|| consegui no prócimo comentario :)
    char str[200];
    int tamanho;

    for(int i = 0; *pnt!= '\0'; i++){
        str[i] = *pnt++;
        tamanho++;
}
pnt--; //percebi que o ponteiro aqui d cima, dava um ++ depois de ter acabado, ou seja, deixava mais um espaço para completar, só n sei pq completava com a primeira letra
    for(int i = 0; i <tamanho; i++){
    //ponteiro ta no ultimo endereço
        *pnt = str[i];
        pnt--;
}


}



int main(){
int op;
printf("\nDigite o número da operação que deseja fazer: \n1-Inverter a frase \n2-Numeros pares");
scanf("%i", &op);
switch (op){

case 1:

    int tamanho;
    char * pnt;
    char str[200];


    printf("\nDigite um frase para que seus caracteres se invertam\n");
    scanf("%s", &str);

    tamanho = strlen(str);

    pnt = &str[0]; // tinha colocado sem o & e dai tinha dado char to char*, dps coloquei o & antes do pnt(besta) e tinha dado invalue required as left operand .... (mas lendo de novo em portugues vi meu erro d logica e consegui arrumar)

    inverte(pnt); // tinha colocado inverte(&pnt) e falou q era char** to char* (só tirei e deu certo n faço ideia porque)

    for(int i=0; i< tamanho; i++){
    str[i]=*pnt++; //tinha esquecido de colocar o * antes do pnt e deu char* to char (consegui mais ou menos perceber)
}

    printf("Essa e a frase que voce digitou ao contrario: %s", str);

break;

case 2 :
    int i = 0;
    char para;
    char * vetor;
    char seq[200];

    //como que eu faria para deixar ele rodando e pegando os dados mas se a qualquer momento pressionasse / por exemplo parasse o loop(sem parar o programa)

    printf("\nDigite uma sequencia de números(clique barra para parar de escrever)");
    do{

    para = getch();
    if (para == '/')
        break;

    scanf("%s", &seq[i]);
    fflush(stdin);
    i++;
    }while(i<500000');

break;






default:
    printf("Digite uma opção dentro das permitidas")
}








}





















