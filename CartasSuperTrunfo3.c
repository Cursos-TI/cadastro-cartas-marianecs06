#include <stdio.h>

int main (){
     // Área para definição das variáveis para armazenar as propriedades das cidades
    // Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;

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
    scanf("%d", &pontosTuristicos1);


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
    scanf("%d", &pontosTuristicos2);

    /*
    %d: Imprime um inteiro no formato decimal.
    %f: Imprime um número de ponto flutuante no formato padrão.
    %c: Imprime um único caractere.
    %s: Imprime uma cadeia (string) de caracteres.
    */

    //Área para os cálculos
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Comparação usando if/else (Atributo: Área)
    // Regra da Área: O maior valor vence.

    printf("Comparação de cartas (Atributo: Área)\n");

    // Exibe os valores comparados
    printf("Carta 1 - %s: %f\n", cidade1, area1);
    printf("Carta 2 - %s: %f\n", cidade2, area2);

        if (area1 > area2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }

    return 0;
}
