#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // PRIMEIRA CARTA
    char estado1[50], codigoCarta1[3], nomeCidade1[50] ;
    int populacao1, numPontosTuristicos1;
    float area1, pib1;

    // SEGUNDA CARTA
    char estado2[50], codigoCarta2[3], nomeCidade2[50] ;
    int populacao2, numPontosTuristicos2;
    float area2, pib2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // CADASTRO PRIMEIRA CARTA
    
    printf("=== Cadastro da Primeira Carta ===\n");

    printf("Digite o nome do estado: ");
    scanf(" %[s]\n", estado1); 

    printf("Digite o código da carta: ");
    scanf(" %[s]\n", &codigoCarta1);


    printf("Digite o nome da cidade: ");
    scanf(" %[s]\n", nomeCidade1);

    printf("Digite a população: ");
    scanf("%i", &populacao1);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%i", &numPontosTuristicos1);

    // CADASTRO SEGUNDA CARTA

        printf("=== Cadastro da Primeira Carta ===\n");

    printf("Digite o nome do estado: ");
    scanf(" %[s]\n", estado2); 

    printf("Digite o código da carta: ");
    scanf(" %[s]\n", &codigoCarta2);


    printf("Digite o nome da cidade: ");
    scanf(" %[s]\n", nomeCidade2);

    printf("Digite a população: ");
    scanf("%i", &populacao2);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%i", &numPontosTuristicos2);


    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\n--- Carta 1 ---\n");
    printf("Estado                  : %s\n", estado1);
    printf("Código da Carta         : %d\n", codigoCarta1);
    printf("Nome da Cidade          : %s\n", nomeCidade1);
    printf("População               : %d habitantes\n", populacao1);
    printf("Área                    : %.2f km²\n", area1);
    printf("PIB                     : R$ %.2lf bilhões\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos1);
    printf("-------------------------\n");
    printf("-------------------------\n");
    printf("-------------------------\n");

 printf("\n--- Carta 2 ---\n");
    printf("Estado                  : %s\n", estado2);
    printf("Código da Carta         : %d\n", codigoCarta2);
    printf("Nome da Cidade          : %s\n", nomeCidade2);
    printf("População               : %d habitantes\n", populacao2);
    printf("Área                    : %.2f km²\n", area2);
    printf("PIB                     : R$ %.2lf bilhões\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos2);
    printf("-------------------------\n");

    return 0;



}
