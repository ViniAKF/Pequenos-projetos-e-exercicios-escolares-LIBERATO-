#include <stdio.h>
#include "bugiganga.cpp"
#include <conio.h>
#include <windows.h>


int k,num,ran=1;
char mtx[11][11];


void Limpe(void){

  for(int i=0;i<11;i++)
    for(int j=0;j<11;j++)
     mtx[i][j]=0;

}

void Visualize(void)
{
  for(int i=0;i<11;i++){
    for(int j=0;j<11;j++)
    {
        gotoxy(i+5,j+7);


       if(mtx[i][j]==1)
        textcolor(LIGHT_RED);
       else
        textcolor(WHITE);
     printf("%c",219);

    }
}
}

void EscreveNome(int nome)
   {

    if(nome==0)//V
    {
      for(int i=2; i<6;i++){
        mtx[3][i]=1;
      }
      for(int i=5;i<9;i++){
        mtx[4][i]=1;
      }
      for(int i=8;i<10;i++){
        mtx[5][i]=1;
      }
      for(int i=9;i<11;i++){
        mtx[6][i]=1;
      }
      //outro lado
      for(int i=2; i<6;i++){
        mtx[9][i]=1;
      }
      for(int i=5;i<9;i++){
        mtx[8][i]=1;
      }
      for(int i=8;i<10;i++){
        mtx[7][i]=1;
      }


      k=5;
    }
    else if(nome==1)//I
    {
    for(int i=2;i<11;i++){
        mtx[6][i]=1;
    }


    k=16;
   }
    else if(nome==2)//N
    {
      for(int i=2;i<11;i++)
          mtx[3][i]=1;

    /* POR QUE NÃO DEU CERTO? isso ao invés das linhas 92 até

     for(int i=4;i<10;i++){
        int j=3;
          for(int l=j;l<j+3;l++){
            mtx[i][l]=1;

     j++;
      }}
*/
      for (int i=3;i<6;i++)
          mtx[4][i]=1;
      for (int i=4;i<7;i++)
      mtx[5][i]=1;
      for (int i=5;i<8;i++)
          mtx[6][i]=1;
          for (int i=6;i<9;i++)
          mtx[7][i]=1;
          for (int i=7;i<10;i++)
          mtx[8][i]=1;
      for(int i=2;i<11;i++)
          mtx[9][i]=1;

      k=27;
    }
    else if(nome==3)//I
    {

    for(int i=2;i<11;i++){
        mtx[6][i]=1;
    }
     k=38;

    }

   }
void EscreveNumero(int num){

  if(num==0)
  {
      for(int i=1;i<10;i++)//segmanto A
          mtx[i][1]=1;
      for(int i=1;i<10;i++)//segmanto D
          mtx[i][9]=1;
      for(int i=1;i<6;i++)//segmento F
          mtx[1][i]=1;
      for(int i=1;i<6;i++)//segmento B
         mtx[9][i]=1;
      for(int i=5;i<10;i++)//segmento E
         mtx[1][i]=1;
      for(int i=5;i<10;i++)//segmento C
         mtx[9][i]=1;
  }
  else if(num==1)
  {
       for(int i=1;i<6;i++)//segmento B
         mtx[9][i]=1;
        for(int i=5;i<10;i++)//segmento C
         mtx[9][i]=1;
  }
  else if(num==2)
  {
       for(int i=1;i<10;i++)//segmanto A
          mtx[i][1]=1;
       for(int i=1;i<6;i++)//segmento B
          mtx[9][i]=1;
       for(int i=1;i<10;i++)//degmento G
          mtx[i][5]=1;
       for(int i=5;i<10;i++)//segmento E
          mtx[1][i]=1;
       for(int i=1;i<10;i++)//segmanto D
          mtx[i][9]=1;
  }
  else if(num==3)
  {
       for(int i=1;i<10;i++)//segmanto A
          mtx[i][1]=1;
         for(int i=1;i<6;i++)//segmento B
         mtx[9][i]=1;
       for(int i=5;i<10;i++)//segmento C
         mtx[9][i]=1;
       for(int i=1;i<10;i++)//segmanto D
          mtx[i][9]=1;
       for(int i=1;i<10;i++)//degmento G
          mtx[i][5]=1;
  }
   else if(num==4)
   {
       for(int i=1;i<6;i++)//segmento B
         mtx[9][i]=1;
       for(int i=5;i<10;i++)//segmento C
         mtx[9][i]=1;
       for(int i=1;i<10;i++)//degmento G
          mtx[i][5]=1;
       for(int i=1;i<6;i++)//segmento F
          mtx[1][i]=1;
   }
   else if(num==5)
   {
       for(int i=1;i<10;i++)//segmanto A
          mtx[i][1]=1;
       for(int i=5;i<10;i++)//segmento C
         mtx[9][i]=1;
       for(int i=1;i<10;i++)//segmanto D
          mtx[i][9]=1;
        for(int i=1;i<10;i++)//degmento G
          mtx[i][5]=1;
    for(int i=1;i<6;i++)//segmento F
          mtx[1][i]=1;

   }
   else if(num==6)
   {
       for(int i=1;i<10;i++)//segmanto A
          mtx[i][1]=1;
       for(int i=1;i<10;i++)//segmanto D
          mtx[i][9]=1;
       for(int i=1;i<10;i++)//degmento G
          mtx[i][5]=1;
       for(int i=1;i<6;i++)//segmento F
          mtx[1][i]=1;
      for(int i=5;i<10;i++)//segmento E
         mtx[1][i]=1;
      for(int i=5;i<10;i++)//segmento C
         mtx[9][i]=1;

   }
   else if(num==7)
   {
       for(int i=1;i<10;i++)//segmanto A
          mtx[i][1]=1;
        for(int i=1;i<6;i++)//segmento B
         mtx[9][i]=1;
        for(int i=5;i<10;i++)//segmento C
         mtx[9][i]=1;
   }
  else if(num==8)
   {
     for(int i=2;i<9;i++)
         mtx[i][1]=1;// i sendo x e j sendo y
     for(int i=2;i<9;i++)
         mtx[i][9]=1;
     for(int i=2;i<9;i++)
         mtx[i][5]=1;
     for(int i=2;i<5;i++)
         mtx[1][i]=1;
     for(int i=2;i<5;i++)
         mtx[9][i]=1;
     for(int i=6;i<9;i++)//segmento E
         mtx[1][i]=1;
     for(int i=6;i<9;i++)
         mtx[9][i]=1;

  }
  else if (num==9)
  {
    for(int i=1;i<10;i++)//segmanto A
          mtx[i][1]=1;
    for(int i=1;i<10;i++)//segmanto D
          mtx[i][9]=1;
    for(int i=1;i<10;i++)//degmento G
          mtx[i][5]=1;
    for(int i=1;i<6;i++)//segmento F
          mtx[1][i]=1;
    for(int i=1;i<6;i++)//segmento B
         mtx[9][i]=1;
    for(int i=5;i<10;i++)
         mtx[9][i]=1;

  }
}

void Recado(int letra)
{
    if(letra==0)//B
    {
      for(int i=1;i<9;i++)//segmanto A
          mtx[i][1]=1;
      for(int i=1;i<9;i++)//degmento G
          mtx[i][5]=1;
      for(int i=1;i<6;i++)//segmento F
          mtx[1][i]=1;
      for(int i=2;i<5;i++)//segmento B
         mtx[9][i]=1;
      for(int i=5;i<10;i++)//segmento E
         mtx[1][i]=1;
      for(int i=6;i<9;i++)//segmento C
         mtx[9][i]=1;
      for(int i=2;i<10;i++)//segmanto D
         mtx[i][9]=1;
         k=5;
    }
    else if(letra==1)//O
    {
      for(int i=1;i<10;i++)//segmanto A
          mtx[i][1]=1;
      for(int i=1;i<10;i++)//segmanto D
          mtx[i][9]=1;
      for(int i=1;i<6;i++)//segmento F
          mtx[1][i]=1;
      for(int i=1;i<6;i++)//segmento B
         mtx[9][i]=1;
      for(int i=5;i<10;i++)//segmento E
         mtx[1][i]=1;
      for(int i=5;i<10;i++)//segmento C
         mtx[9][i]=1;
         k=16;
    }
    else if(letra==2)//A
    {
      for(int i=1;i<10;i++)//segmanto A
          mtx[i][1]=1;
      for(int i=1;i<10;i++)//degmento G
          mtx[i][5]=1;
      for(int i=1;i<6;i++)//segmento F
          mtx[1][i]=1;
      for(int i=1;i<6;i++)//segmento B
         mtx[9][i]=1;
      for(int i=5;i<10;i++)//segmento E
         mtx[1][i]=1;
      for(int i=5;i<10;i++)//segmento C
         mtx[9][i]=1;
      k=27;
    }
    else if(letra==3)//S
    {
       for(int i=1;i<10;i++)//segmanto A
          mtx[i][1]=1;
       for(int i=5;i<10;i++)//segmento C
         mtx[9][i]=1;
       for(int i=1;i<10;i++)//segmanto D
          mtx[i][9]=1;
       for(int i=1;i<10;i++)//degmento G
          mtx[i][5]=1;
       for(int i=1;i<6;i++)//segmento F
          mtx[1][i]=1;
          k=38;
    }
    else if(letra==4) //F
    {
      for(int i=1;i<10;i++)//segmanto A
          mtx[i][1]=1;
      for(int i=1;i<10;i++)//degmento G
          mtx[i][5]=1;
    for(int i=1;i<6;i++)//segmento F
         mtx[1][i]=1;
    for(int i=5;i<10;i++)//segmento E
         mtx[1][i]=1;
         k=49;
    }
   else if(letra==5)//E
   {
    for(int i=1;i<10;i++)//segmanto A
          mtx[i][1]=1;
    for(int i=1;i<10;i++)//degmento G
          mtx[i][5]=1;
    for(int i=1;i<6;i++)//segmento F
         mtx[1][i]=1;
    for(int i=5;i<10;i++)//segmento E
         mtx[1][i]=1;
    for(int i=1;i<10;i++)//segmanto D
          mtx[i][9]=1;
     k=60;
   }
   else if(letra==6)//S
   {
         for(int i=1;i<10;i++)//segmanto A
          mtx[i][1]=1;
       for(int i=5;i<10;i++)//segmento C
         mtx[9][i]=1;
       for(int i=1;i<10;i++)//segmanto D
          mtx[i][9]=1;
       for(int i=1;i<10;i++)//degmento G
          mtx[i][5]=1;
       for(int i=1;i<6;i++)//segmento F
          mtx[1][i]=1;
      k=71;
   }
   else if(letra==7)//T
   {
    for(int i=1;i<10;i++)//segmanto A
          mtx[i][1]=1;
      for(int i=1;i<10;i++)
          mtx[5][i]=1;
      k=82;
   }
   else if(letra==8)//A
   {
     for(int i=1;i<10;i++)//segmanto A
          mtx[i][1]=1;
      for(int i=1;i<10;i++)//degmento G
          mtx[i][5]=1;
      for(int i=1;i<6;i++)//segmento F
          mtx[1][i]=1;
      for(int i=1;i<6;i++)//segmento B
         mtx[9][i]=1;
      for(int i=5;i<10;i++)//segmento E
         mtx[1][i]=1;
      for(int i=5;i<10;i++)//segmento C
         mtx[9][i]=1;
        k=93;
   }
   else if(letra==9)//S
   {
       for(int i=1;i<10;i++)//segmanto A
          mtx[i][1]=1;
       for(int i=5;i<10;i++)//segmento C
         mtx[9][i]=1;
       for(int i=1;i<10;i++)//segmanto D
          mtx[i][9]=1;
       for(int i=1;i<10;i++)//degmento G
          mtx[i][5]=1;
       for(int i=1;i<6;i++)//segmento F
          mtx[1][i]=1;
          k=104;
   }
   ran=0;
}

void EspacoEntreMatrizes(void)
{
  for(int i=0;i<11;i++){
    for(int j=0;j<11;j++)
    {
        gotoxy(i+k,j+7);

       if(mtx[i][j]==1)
        textcolor(LIGHT_RED);
       else
        textcolor(WHITE);
     printf("%c",219);

    }
}
}



int main() {



       for(int j=0;j<=3;j++)
       {
                Limpe();
                EscreveNome(j);
                EspacoEntreMatrizes();
            }
            Sleep(5000);
            system("cls");
            int t = 0;
       printf("Escolha um numero para comecar a rodar");
       scanf("%d",&t);
       printf("Clique S para aparecer uma mensagem e P para pausar");
       while (ran) {
            while (!_kbhit()) {
                Limpe();
                Visualize();
                Sleep(100);
                EscreveNumero(t);
                Visualize();
                Sleep(900);
                t = (t + 1) % 10; // Garante que t permaneça entre 0 e 9

            }

            char key = _getch();
            if (key == 'p' || key == 'P') {
               while (_getch() != 'p' && _getch() != 'P') {}
                printf("\n\n\n\nExecucao pausada. Pressione 'p' para continuar.\n");
//COMO FARIA PARA Q ALTERNASSE ENTRE APRECER E DESAPARECER A MENSAGEM CASO O USUARIO APERTASSE Q NOVAMENTE?
}

            else if(key=='s'||key=='S'){
              for(int j=0;j<=9;j++)
              {

              Limpe();
              Recado(j);
              EspacoEntreMatrizes();


              }
            }
        }


    return 0;
}
