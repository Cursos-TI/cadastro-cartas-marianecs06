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
    //Novas variáveis
    float densidadepopulacional1;
    float pibpercapita1;


    //Carta 2
    char estado2;
    char codigo2 [4];
    char cidade2 [50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    //Novas variáveis
    float densidadepopulacional2;
    float pibpercapita2;

    // Área para entrada de dados
    printf(" *** Cadastro da Carta 1 *** \n");

    printf("Estado (A-H): \n");
    scanf(" %c", &estado1);

    printf("Código: \n");
    scanf("%s", codigo1);

    printf("Nome da Cidade: \n");
    scanf("%s", cidade1);

    printf("População: \n");
    scanf("%d", &populacao1);

    printf("Área: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontosturisticos1);


    printf(" *** Cadastro da Carta 2 ***\n");

    printf("Estado (A-H): \n");
    scanf(" %c", &estado2);

    printf("Código: \n");
    scanf("%s", codigo2);

    printf("Nome da cidade: \n");
    scanf("%s", cidade2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Área: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontosturisticos2);

    /*
    %d: Imprime um inteiro no formato decimal.
    %f: Imprime um número de ponto flutuante no formato padrão.
    %c: Imprime um único caractere.
    %s: Imprime uma cadeia (string) de caracteres.
    */

    //Área para os cálculos
    densidadepopulacional1 = (float) populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;

    densidadepopulacional2 = (float) populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;


    // Área para exibição dos dados da cidade
    //Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km2\n", area1);
    printf("PIB: %.2f reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadepopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);

    printf("\n");
    
    //Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadepopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);


    return 0;


}