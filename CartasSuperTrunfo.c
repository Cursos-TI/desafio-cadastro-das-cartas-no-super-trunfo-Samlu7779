#include <stdio.h>

int main() {
   
   char estado1[50];
   char cidade1[50];
   char codigo1[50];
   int turisticos1;
   int populacao1;
   float pib1;
   float km1;
   
   char estado2[50];
   char cidade2[50];
   char codigo2[50];
   int turisticos2;
   int populacao2;
   float pib2;
   float km2;
  
   
  printf("Digite o nome do estado da primeira carta:\n");
   scanf("%s",&estado1);

   printf("Digite o nome  da Cidade da primeeira carta:\n");
   scanf("%s",&cidade1);

    printf("Digite o nome  do Codigo da cidade da primeeira carta:\n");
   scanf("%s",&codigo1);

   printf("Digite a quantidade da população da primeira carta:\n");
   scanf("%d",&populacao1);


   printf("Digite a quantidade de numeros  turisticos da primeira carta:\n");
   scanf("%d",&turisticos1);

   printf("Digite a quantidade do valor do PIB para primeira carta;\n");
   scanf("%f", &pib1);

    printf("Digite o tamanho da area em quilometros quadrados da primeira carta;\n");
   scanf("%f", &km1);







    
  printf("Digite o nome do estado da segunda carta:\n");
   scanf("%s",&estado2);

   printf("Digite o nome  da Cidade da segunda carta:\n");
   scanf("%s",&cidade2);

    printf("Digite o nome  da Codigo da cidade da segunda carta:\n");
   scanf("%s",&codigo2);

   printf("Digite a quantidade da população da segunda carta:\n");
   scanf("%d",&populacao2);


   printf("Digite a quantidade de numeros  turisticos da segunda carta:\n");
   scanf("%d",&turisticos2);

   printf("Digite a quantidade do valor do PIB pra segunda carta;\n");
   scanf("%f", &pib2);

    printf("Digite o tamanho da area em quilometros quadrados da segunda carta;\n");
   scanf("%f", &km2);





    
    printf("Estado1: %s - População: %d\n", estado1, populacao1);
    printf("Cidade: %s - Codigo; %s\n", cidade1, codigo1);
    printf("Pontos turisticos: %d - PIB: %f\n", turisticos1, pib1);
    printf("Quilometros quadrados: %f\n" ,km1 );
    printf("Estado2: %s - População: %d\n", estado2, populacao2);
    printf("Cidade: %s - Codigo: %s", cidade2, codigo2);
    printf("Pontos turisticos: %d - PIB: %f\n", turisticos2, pib2);
    printf("Quilometros quadrados: %f" ,km2 );
   


   return 0;
}