#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    // PRIMEIRA CARTA
    char estado1[50], codigoCarta1[10], nomeCidade1[50];
    int populacao1, numPontosTuristicos1;
    float area1, pib1, densidadePop1, pibPer1;

    // SEGUNDA CARTA
    char estado2[50], codigoCarta2[10], nomeCidade2[50];
    int populacao2, numPontosTuristicos2;
    float area2, pib2, densidadePop2, pibPer2;

    // CADASTRO PRIMEIRA CARTA
   printf("\n====== Cadastro da Primeira Carta ======\n");

    printf("Digite o nome do estado: ");
    scanf(" %[^\n]", estado1); 

    printf("Digite o código da carta: ");
    scanf(" %[^\n]", codigoCarta1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numPontosTuristicos1);

    densidadePop2 = (float)(populacao1 / area1);
    pibPer2 = (float)(pib1 / populacao1);

    // Limpa o buffer do teclado
    getchar();

    // CADASTRO SEGUNDA CARTA
    printf("\n====== Cadastro da Segunda Carta ======\n");

    printf("Digite o nome do estado: ");
    scanf(" %[^\n]", estado2); 

    printf("Digite o código da carta: ");
    scanf(" %[^\n]", codigoCarta2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numPontosTuristicos2);

    densidadePop1 = (float)(populacao2 / area2);
    pibPer1 = (float)(pib2 / populacao2);

    // Exibição dos Dados das Cartas:
    printf("\n------- Carta 1 -------\n");
    printf("Estado                     : %s\n", estado1);
    printf("Código da Carta            : %s\n", codigoCarta1);
    printf("Nome da Cidade             : %s\n", nomeCidade1);
    printf("População                  : %d \n", populacao1);
    printf("Área                       : %.2f km²\n", area1);
    printf("PIB                        : R$ %.2f \n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos1);
    printf("Densidade Populacional     : %.2f hab/km²\n", densidadePop1);
    printf("PIB per Capita             : R$ %.2f\n", pibPer1);
    

    printf("\n-------Carta 2 -------\n");
    printf("Estado                     : %s\n", estado2);
    printf("Código da Carta            : %s\n", codigoCarta2);
    printf("Nome da Cidade             : %s\n", nomeCidade2);
    printf("População                  : %d \n", populacao2);
    printf("Área                       : %.2f km²\n", area2);
    printf("PIB                        : R$ %.2f \n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos2);
    printf("Densidade Populacional     : %.2f hab/km²\n", densidadePop2);
    printf("PIB per Capita             : R$ %.2f\n", pibPer2);

    return 0;
}
