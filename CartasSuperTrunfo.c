#include <stdio.h>

int main() {
    char estado1[50];
    char cidade1[50];
    char codigo1[50];
    unsigned long int populacao1;
    int turisticos1;
    float pib1;
    float km1;

    char estado2[50];
    char cidade2[50];
    char codigo2[50];
    unsigned long int populacao2;
    int turisticos2;
    float pib2;
    float km2;

    // entrada 1
    printf("Digite o nome do estado da primeira carta:\n");
    scanf("%49s", estado1);

    printf("Digite o nome da cidade da primeira carta:\n");
    scanf("%49s", cidade1);

    printf("Digite o código da cidade da primeira carta:\n");
    scanf("%49s", codigo1);

    printf("Digite a quantidade da população da primeira carta:\n");
    scanf("%lu", &populacao1);

    printf("Digite a quantidade de pontos turísticos da primeira carta:\n");
    scanf("%d", &turisticos1);

    printf("Digite o valor do PIB para a primeira carta:\n");
    scanf("%f", &pib1);

    printf("Digite o tamanho da área em quilômetros quadrados da primeira carta:\n");
    scanf("%f", &km1);

    // entrada 2
    printf("Digite o nome do estado da segunda carta:\n");
    scanf("%49s", estado2);

    printf("Digite o nome da cidade da segunda carta:\n");
    scanf("%49s", cidade2);

    printf("Digite o código da cidade da segunda carta:\n");
    scanf("%49s", codigo2);

    printf("Digite a quantidade da população da segunda carta:\n");
    scanf("%lu", &populacao2);

    printf("Digite a quantidade de pontos turísticos da segunda carta:\n");
    scanf("%d", &turisticos2);

    printf("Digite o valor do PIB para a segunda carta:\n");
    scanf("%f", &pib2);

    printf("Digite o tamanho da área em quilômetros quadrados da segunda carta:\n");
    scanf("%f", &km2);

    // Cálculo do PIB per capita
    float pib_per_capita1 = pib1 / populacao1;
    float pib_per_capita2 = pib2 / populacao2;

    // Cálculo da densidade populacional (população por km²)
    float densidade1 = (km1 > 0) ? (float)populacao1 / km1 : 0;
    float densidade2 = (km2 > 0) ? (float)populacao2 / km2 : 0;

    // Cálculo do inverso da densidade populacional (quanto menor a densidade, maior o inverso)
    float inv_densidade1 = (densidade1 > 0) ? 1.0 / densidade1 : 0;
    float inv_densidade2 = (densidade2 > 0) ? 1.0 / densidade2 : 0;

    // Cálculo do Super Poder (soma de todos os atributos numéricos)
    float super_poder1 = (float)populacao1 + km1 + pib1 + turisticos1 + pib_per_capita1 + inv_densidade1;
    float super_poder2 = (float)populacao2 + km2 + pib2 + turisticos2 + pib_per_capita2 + inv_densidade2;

    // Saída dos dados
    printf("\nEstado1: %s - População: %lu\n", estado1, populacao1);
    printf("Cidade: %s - Código: %s\n", cidade1, codigo1);
    printf("Pontos turísticos: %d - PIB: %.2f\n", turisticos1, pib1);
    printf("Quilômetros quadrados: %.2f\n", km1);
    printf("PIB per capita: %.2f - Densidade populacional: %.2f\n", pib_per_capita1, densidade1);
    printf("Super Poder: %.2f\n", super_poder1);

    printf("\nEstado2: %s - População: %lu\n", estado2, populacao2);
    printf("Cidade: %s - Código: %s\n", cidade2, codigo2);
    printf("Pontos turísticos: %d - PIB: %.2f\n", turisticos2, pib2);
    printf("Quilômetros quadrados: %.2f\n", km2);
    printf("PIB per capita: %.2f - Densidade populacional: %.2f\n", pib_per_capita2, densidade2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Comparação das cartas
    printf("\nComparação de Cartas:\n");

    // População
    printf("População: %s venceu (%d)\n", (populacao1 > populacao2) ? "Carta 1" : "Carta 2", populacao1 > populacao2);

    // Área
    printf("Área: %s venceu (%d)\n", (km1 > km2) ? "Carta 1" : "Carta 2", km1 > km2);

    // PIB
    printf("PIB: %s venceu (%d)\n", (pib1 > pib2) ? "Carta 1" : "Carta 2", pib1 > pib2);

    // Pontos turísticos
    printf("Pontos Turísticos: %s venceu (%d)\n", (turisticos1 > turisticos2) ? "Carta 1" : "Carta 2", turisticos1 > turisticos2);

    // Densidade populacional (menor densidade vence)
    printf("Densidade Populacional: %s venceu (%d)\n", (densidade1 < densidade2) ? "Carta 1" : "Carta 2", densidade1 < densidade2);

    // PIB per capita
    printf("PIB per Capita: %s venceu (%d)\n", (pib_per_capita1 > pib_per_capita2) ? "Carta 1" : "Carta 2", pib_per_capita1 > pib_per_capita2);

    // Super Poder
    printf("Super Poder: %s venceu (%d)\n", (super_poder1 > super_poder2) ? "Carta 1" : "Carta 2", super_poder1 > super_poder2);

    return 0;
}