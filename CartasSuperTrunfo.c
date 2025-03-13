#include <stdio.h>
int main() {
    //Variáveis para a primeira carta.
    char estado01;
    char codigo01[4];
    char cidade01[50];
    int populacao01, pontos_turisticos01;
    float area01, pib01;

    //Váriaveis para a segunda carta.
    char estado01;
    char codigo02[4];
    char cidade02[50];
    int populacao02, pontos_turisticos02;
    float area02, pib02;

    //Solicitação dos dados para o usuário, primeira carta.
    printf ("Digite os dados da primeira carta: \n");

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

    printf ("Digite o pib da cidade:");
    scanf ("%f"), &pib01;

    printf ("Digite a quantidade de pontos turisticos:");
    scanf ("%d"), &pontos_turisticos01;

    //Solicitação para o usuário, segunda carta.
    printf ("Digite os dados da segunda carta:");

    printf ("Digite o nome do estado:");
    scanf ("%c"), &estado01;

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
