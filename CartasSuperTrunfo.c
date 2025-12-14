#include <stdio.h>

int main (){
    // Área para definição das variáveis para armazenar as propriedades das cidades
    // Carta 1
    char estado1;
    char codigo1 [4];
    char cidade1 [50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    //Novas variáveis
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;


    //Carta 2
    char estado2;
    char codigo2 [4];
    char cidade2 [50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    //Novas variáveis
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    // Variáveis para armazenar o resultado da comparação (1 = Carta 1 vence, 0 = Carta 2 vence)
    int vencedorPopulacao;
    int vencedorArea;
    int vencedorPib;
    int vencedorPontosTuristicos;
    int vencedorDensidade;
    int vencedorPibperCapita;
    int vencedorSuperPoder;


    // Área para entrada de dados
    printf(" *** Cadastro da Carta 1 *** \n");

    printf("Estado (A-H): \n");
    scanf(" %c", &estado1);

    printf("Código: \n");
    scanf("%s", codigo1);

    printf("Nome da Cidade: \n");
    scanf("%s", cidade1);

    printf("População: \n");
    scanf("%lu", &populacao1);

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
    scanf("%lu", &populacao2);

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
    densidadePopulacional1 = (float) populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    densidadePopulacional2 = (float) populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    //População (Maior vence)
    vencedorPopulacao = populacao1 > populacao2;

    //Área (Maior vence)
    vencedorArea = area1 > area2;

    //PIB (Maior vence)
    vencedorPib = pib1 > pib2;

    //Pontos Turísticos (Maior vence)
    vencedorPontosTuristicos = pontosTuristicos1 > pontosTuristicos2;

    //Densidade Populacional (Atenção: Menor valor vence!)
    vencedorDensidade = densidadePopulacional1 < densidadePopulacional2; // Carta 1 vence se for MENOR

    // 6. PIB per Capita (Maior vence)
    vencedorPibperCapita = pibPerCapita1 > pibPerCapita2;

    // 7. Super Poder (Maior vence)
    vencedorSuperPoder = superPoder1 > superPoder2;

    // Área para exibição dos dados da cidade
    //Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km2\n", area1);
    printf("PIB: %.2f reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\n");
    
    //Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);


    // Área para exibição dos resultados das Comparações
    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", vencedorPopulacao ? 1 : 2, vencedorPopulacao);
    printf("Área: Carta %d venceu (%d)\n", vencedorArea ? 1 : 2, vencedorArea);
    printf("PIB: Carta %d venceu (%d)\n", vencedorPib ? 1 : 2, vencedorPib);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", vencedorPontosTuristicos ? 1 : 2, vencedorPontosTuristicos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", vencedorDensidade ? 1 : 2, vencedorDensidade);
    printf("PIB per Capita: Carta %d venceu (%d)\n", vencedorPibperCapita ? 1 : 2, vencedorPibperCapita);
    printf("Super Poder: Carta %d venceu (%d)\n", vencedorSuperPoder ? 1 : 2, vencedorSuperPoder);

    return 0;


}