#include <stdio.h>
int main() {
    //Variáveis para a primeira carta.
    char estado01 ='A';
    char codigo01[4]= 'A01';
    char cidade01[50];
    int populacao01, pontos_turisticos01;
    float area01, pib01;

    //Váriaveis para a segunda carta.
    char estado02 = 'B';
    char codigo02[4] = 'B02';
    char cidade02[50];
    int populacao02, pontos_turisticos02;
    float area02, pib02;

    //Solicitação dos dados para o usuário, primeira carta.
    printf ("Digite os dados da primeira carta: \n");

    printf ("Digite o nome do estado: \n");
    scanf ("%c", &estado01);

    printf ("Digite o codigo da carta: \n");
    scanf ("%c", &codigo01);

    printf ("Digite o nome da cidade: \n");
    scanf ("%c"), &cidade01;

    printf ("Digite a quantidade da populacao: \n");
    scanf ("%d"), &populacao01;
    
    printf ("Digite a area em km²: \n");
    scanf ("%f"), &area01;

    printf ("Digite o Pib: \n");
    scanf ("%f"), &pib01;

    printf ("Digite a quantidade de pontos turisticos: \n");
    scanf ("%d"), &pontos_turisticos01;
    
//Solicitação para o usuário, segunda carta.

printf ("Digite o nome do estado: \n");
scanf ("%c"), &estado02;

printf ("Digite o codigo da carta: \n");
scanf ("%c"), &codigo02;

printf ("Digite o nome da cidade: \n");
scanf ("%c"), &cidade02;

printf ("Digite a quantidade da populacao: \n");
scanf ("%d"), &populacao02;

printf ("Digite a area em km²: \n");
scanf ("%f"), &area02;

printf ("Digite o pib da cidade: \n");
scanf ("%f"), &pib02;

printf("Digite a quantidade de pontos turisticos: \n");
scanf("%d"), &pontos_turisticos02;





    

    
  return 0;
}
