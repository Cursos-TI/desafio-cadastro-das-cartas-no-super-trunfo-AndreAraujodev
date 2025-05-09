#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1[20], estado2[20], codigoCarta1[20], codigoCarta2[20], nomeDaCidade1[20], nomeDaCidade2[20];
    int populacao1, populacao2, pontosTuristico1, pontosTuristico2;
    float area1, area2, PIB1, PIB2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    scanf("Digite o Estado 1: \n");
    scanf("Digite o Código da carta 1: \n");
    scanf("Digite o nome da cidade 1: \n");
    scanf("Digite a população da cidade 1: \n");
    scanf("Digite Área em km² 1: \n");
    scanf("Digite o PIB da cidade 1 \n");
    scanf("Digite o número de pontos turísticos 1 \n");



    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("CARTA NÚMERO 1\n");
    printf("-----------------------");
    printf("O Estado da carta 1 é %s código %s nome da cidade %s\n", &estado1, codigoCarta1, nomeDaCidade1);
    printf("População: %i\n", populacao1);
    printf("Área em km²: %f\n", area1);
    printf("PIB: %f\f", PIB1);
    printf("PIB: %i\f", pontosTuristico1);


}
