#include <stdio.h>
int main() {
 
   //Variáveis para a primeira carta.
   char estado01 ='A'; // O estado pode ser apenas um caractere
   char codigo01[4]= "A01"; // Tamanho suficiente para armazenar 4 caracteres e o '\0'
   char cidade01[50]; // Nome da cidade com até 49 caracteres
   unsigned long int populacao01;
   float area01;
   float pib01;
   int pontos_turisticos01;
   float densidade01;
   float percapita01;
   float resultado01;

   //Váriaveis para a segunda carta.
   char estado02 = 'B'; // O estado pode ser apenas um caractere
   char codigo02[4] = "B02"; // Tamanho suficiente para armazenar 4 caracteres e o '\0'
   char cidade02[50]; // Nome da cidade com até 49 caracteres
   unsigned long int populacao02;
   float area02;
   float pib02;
   int pontos_turisticos02;
   float densidade02;
   float percapita02;
   float resultado02;

   // Solicitação dos dados para o usúario, primeira carta.
   printf("Digite os dados da primeira carta:\n");

    // Leitura do nome do estado
    printf("Digite o nome do estado (1 caractere): \n");
    scanf(" %c", &estado01);  // Espaco antes de %c para garantir a leitura correta

    // Leitura do código da carta
    printf("Digite o codigo da carta:\n");
    scanf("%s", codigo01);

    // Leitura do nome da cidade
    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]s", cidade01);  // Usando fgets para permitir leitura com espaços

    // Leitura da população
    printf("Digite a quantidade da população:\n");
    scanf("%lu", &populacao01);

    // Leitura da área
    printf("Digite a área em km²:\n");
    scanf("%f", &area01);

    // Leitura do PIB
    printf("Digite o PIB:\n");
    scanf("%f", &pib01);

    // Leitura da quantidade de pontos turísticos
    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos01);

    // Cálculo da densidade populacional
    densidade01 = (float)populacao01 / area01;
    printf("Densidade populacional: %.2f habitantes por km²\n", densidade01);

    // Cálculo do PIB per capita
    percapita01 = pib01 / populacao01;
    printf("PIB per capita: %.2f\n", percapita01);

    //Solicitação dos dados para o usuário, segunda carta.
    printf("Digite os dados da segunda carta:\n");

    // Leitura do nome do estado
    printf("Digite o nome do estado (1 caractere): \n");
    scanf(" %c", &estado02);  // Espaco antes de %c para garantir a leitura correta

    // Leitura do código da carta
    printf("Digite o codigo da carta:\n");
    scanf("%s", codigo02);

    // Leitura do nome da cidade
    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]s", cidade02);  // Usando fgets para permitir leitura com espaços

    // Leitura da população
    printf("Digite a quantidade da população:\n");
    scanf("%lu", &populacao02);

    // Leitura da área
    printf("Digite a área em km²:\n");
    scanf("%f", &area02);

    // Leitura do PIB
    printf("Digite o PIB:\n");
    scanf("%f", &pib02);

    // Leitura da quantidade de pontos turísticos
    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos02);

    // Cálculo da densidade populacional
    densidade02 = (float)populacao02 / area02;
    printf("Densidade populacional: %.2f habitantes por km²\n", densidade02);

    // Cálculo do PIB per capita
    percapita02 = pib02 / populacao02;
    printf("PIB per capita: %.2f\n", percapita02);

    return 0;
}
