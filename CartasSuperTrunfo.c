#include <stdio.h>
int main() {
 
   //Variáveis para a primeira carta.
   char estado01 ='Ceará';
   char codigo01[4]= "A01";
   char cidade01[50]= "Fortaleza";
   int populacao01 = 2400000;
   float area01 = 312353;
   float pib01 = 73000000;
   int pontos_turisticos01= 50;



   //Váriaveis para a segunda carta.
   char estado02 = 'Bahia';
   char codigo02[4] = "B02";
   char cidade02[50]= "Salvador";
   int populacao02= 2000000;
   float area02= 693000;
   float pib02= 62000000;
   int pontos_turisticos02= 40;

   //Solicitação dos dados para o usuário, primeira carta.
   printf ("Digite os dados da primeira carta:");

   printf ("Digite o nome do estado:");
   scanf ("%c", &estado01);

   printf ("Digite o codigo da carta:");
   scanf ("%s", &codigo01);

   printf ("Digite o nome da cidade:");
   scanf ("%s"), &cidade01;

   printf ("Digite a quantidade da populacao:");
   scanf ("%d"), &populacao01;
   
   printf ("Digite a area em km²:");
   scanf ("%f"), &area01;

   printf ("Digite o Pib:");
   scanf ("%f"), &pib01;

   printf ("Digite a quantidade de pontos turisticos:");
   scanf ("%d"), &pontos_turisticos01;
   
//Solicitação para o usuário, segunda carta.

printf ("Digite o nome do estado:");
scanf ("%c"), &estado02;

printf ("Digite o codigo da carta:");
scanf ("%c"), &codigo02;

printf ("Digite o nome da cidade:");
scanf ("%c"), &cidade02;

printf ("Digite a quantidade da populacao:");
scanf ("%d"), &populacao02;

printf ("Digite a area em km²:");
scanf ("%f"), &area02;

printf ("Digite o pib da cidade:");
scanf ("%f"), &pib02;

printf("Digite a quantidade de pontos turisticos:");
scanf("%d"), &pontos_turisticos02;





   

   
 return 0;
}
