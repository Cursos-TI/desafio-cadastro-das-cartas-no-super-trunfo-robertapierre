#include <stdio.h>
int main() {
 
   //Variáveis para a primeira carta.
   char estado01 ='A';
   char codigo01[4]= "A01";
   char cidade01[50];
   int populacao01;
   float area01;
   float pib01;
   int pontos_turisticos01;
   float densidade01;
   float percapita01;



   //Váriaveis para a segunda carta.
   char estado02 = 'B';
   char codigo02[4] = "B02";
   char cidade02[50];
   int populacao02;
   float area02;
   float pib02;
   int pontos_turisticos02;
   float densidade02;
   float percapita02;


   //Solicitação dos dados para o usuário, primeira carta.
   printf ("Digite os dados da primeira carta:");

   printf ("Digite o nome do estado: \n");
   scanf ("%c", &estado01);

   printf ("Digite o codigo da carta:\n");
   scanf ("%s", &codigo01);

   printf ("Digite o nome da cidade:\n");
   scanf ("%s", &cidade01);

   printf ("Digite a quantidade da populacao:\n");
   scanf ("%d", &populacao01);
   
   printf ("Digite a area em km²:\n");
   scanf ("%f", &area01);

   printf ("Digite o Pib:\n");
   scanf ("%f", &pib01);

   printf ("Digite a quantidade de pontos turisticos:\n");
   scanf ("%d", &pontos_turisticos01);

   printf ("Digite a densidade populacional:\n");
   scanf("%f", &densidade01);

   printf ("Digite o Pib Per Capita:\n")
   scanf ("%f", &percapita01)

   printf ()
   
//Solicitação para o usuário, segunda carta.

printf ("Digite o nome do estado:");
scanf ("%c"), &estado02;

printf ("Digite o codigo da carta:");
scanf ("%s"), &codigo02;

printf ("Digite o nome da cidade:");
scanf ("%s"), &cidade02;

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
