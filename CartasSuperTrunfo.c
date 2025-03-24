#include <stdio.h>

int main() {
  
    char codigo1[4], codigo2[4];
    int populacao1, populacao2; 
    float area1, area2; 
    float pib1, pib2; 
    int pontos_turisticos1, pontos_turisticos2; 


    printf("=== Cadastro da Primeira Carta ===\n");
    printf("Digite o código da cidade (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite a área (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

 
    printf("\n=== Cadastro da Segunda Carta ===\n");
    printf("Digite o código da cidade (ex: B02): ");
    scanf("%s", codigo2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

  
    printf("\n=== Dados Cadastrados ===\n");


    printf("\nPrimeira Carta:\n");
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);


    printf("\nSegunda Carta:\n");
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}