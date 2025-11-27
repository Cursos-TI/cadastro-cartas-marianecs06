#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main (){
    // Área para definição das variáveis para armazenar as propriedades das cidades
    // Carta 1
    char estado1;
    char codigo1 [4];
    char cidade1 [50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;


    //Carta 2
    char estado2;
    char codigo2 [4];
    char cidade2 [50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    // Área para entrada de dados
    printf("Carta 1\n");

    printf("Digite o estado: \n");
    scanf(" %c", &estado1);

    printf("Digite o código: \n");
    scanf("%s", codigo1);

    printf("Digite a cidade: \n");
    scanf("%s", cidade1);

    printf("Digite o número de população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos1);


    printf("Carta 2\n");

    printf("Digite o estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o código: \n");
    scanf("%s", codigo2);

    printf("Digite a cidade: \n");
    scanf("%s", cidade2);

    printf("Digite o número de população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos2);


    // Área para exibição dos dados da cidade
    //Carta 1
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km2\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);

    //Carta 2
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);


    return 0;


}