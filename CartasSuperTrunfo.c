#include <stdio.h>

int main() {
    char estado1[50];
    char cidade1[50];
    char codigo1[50];
    int turisticos1;
    int populacao1;
    float pib1;
    float km1;
    float densidade1;  // Nova variável para densidade populacional
    float pib_per_capita1;  // Nova variável para PIB per capita
    
    char estado2[50];
    char cidade2[50];
    char codigo2[50];
    int turisticos2;
    int populacao2;
    float pib2;
    float km2;
    float densidade2;  // Nova variável para densidade populacional
    float pib_per_capita2;  // Nova variável para PIB per capita
    
    // Entrada de dados da primeira carta
    printf("Digite o nome do estado da primeira carta:\n");
    scanf("%s", estado1);
    
    printf("Digite o nome da Cidade da primeira carta:\n");
    scanf("%s", cidade1);
    
    printf("Digite o Codigo da cidade da primeira carta:\n");
    scanf("%s", codigo1);
    
    printf("Digite a quantidade da populacao da primeira carta:\n");
    scanf("%d", &populacao1);
    
    printf("Digite a quantidade de pontos turisticos da primeira carta:\n");
    scanf("%d", &turisticos1);
    
    printf("Digite o valor do PIB para primeira carta (em bilhoes):\n");
    scanf("%f", &pib1);
    
    printf("Digite o tamanho da area em quilometros quadrados da primeira carta:\n");
    scanf("%f", &km1);
    
    // Entrada de dados da segunda carta
    printf("\nDigite o nome do estado da segunda carta:\n");
    scanf("%s", estado2);
    
    printf("Digite o nome da Cidade da segunda carta:\n");
    scanf("%s", cidade2);
    
    printf("Digite o Codigo da cidade da segunda carta:\n");
    scanf("%s", codigo2);
    
    printf("Digite a quantidade da populacao da segunda carta:\n");
    scanf("%d", &populacao2);
    
    printf("Digite a quantidade de pontos turisticos da segunda carta:\n");
    scanf("%d", &turisticos2);
    
    printf("Digite o valor do PIB para segunda carta (em bilhoes):\n");
    scanf("%f", &pib2);
    
    printf("Digite o tamanho da area em quilometros quadrados da segunda carta:\n");
    scanf("%f", &km2);
    
    // Cálculos
    densidade1 = populacao1 / km1;  // Densidade populacional = população / área
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;  // PIB per capita = PIB (em reais) / população
    
    densidade2 = populacao2 / km2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;
    
    // Exibição dos resultados
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", km1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", km2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    
    return 0;
}