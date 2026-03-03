#include <stdio.h>

int main() {
    // Variáveis das cartas
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[20], cidade2[20];
    int turisticos1, turisticos2;
    float area1, pib1, area2, pib2;
    unsigned long int populacao1, populacao2;

    // CARTA 1 - Registro
    printf("-------PRIMEIRA CARTA-------\n");
    printf("Qual a primeira letra do estado? ");
    scanf(" %c", &estado1);
    printf("Qual codigo da carta? ");
    scanf("%s", codigo1);
    printf("Qual nome da cidade? ");
    scanf(" %s", cidade1); 
    printf("Qual a populacao? ");
    scanf("%lu", &populacao1);
    printf("Qual a area? ");
    scanf("%f", &area1);
    printf("Qual o PIB? ");
    scanf("%f", &pib1);
    printf("Quantos pontos turisticos? ");
    scanf("%d", &turisticos1);

    // CARTA 2 - Registro
    printf("\n-------SEGUNDA CARTA--------\n");
    printf("Qual a primeira letra do estado? ");
    scanf(" %c", &estado2);
    printf("Qual codigo da carta? ");
    scanf("%s", codigo2);
    printf("Qual nome da cidade? ");
    scanf(" %s", cidade2); 
    printf("Qual a populacao? ");
    scanf("%lu", &populacao2);
    printf("Qual a area? ");
    scanf("%f", &area2);
    printf("Qual o PIB? ");
    scanf("%f", &pib2);
    printf("Quantos pontos turisticos? ");
    scanf("%d", &turisticos2);

    // Cálculos
    float densidade1 = (float)populacao1 / area1;
    float densidade2 = (float)populacao2 / area2;
    float pibpercapta1 = pib1 / (float)populacao1; 
    float pibpercapta2 = pib2 / (float)populacao2;

    float superpoder1 = (float)populacao1 + area1 + pib1 + turisticos1 + pibpercapta1 - densidade1;
    float superpoder2 = (float)populacao2 + area2 + pib2 + turisticos2 + pibpercapta2 - densidade2;

    // EXIBIÇÃO COMPLETA DOS DADOS
    printf("\n==============================\n");
    printf("CARTA 1: %s (%s)\n", cidade1, codigo1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", turisticos1);
    printf("Densidade: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pibpercapta1);
    printf("SUPERPODER: %.2f\n", superpoder1);

    printf("\nCARTA 2: %s (%s)\n", cidade2, codigo2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", turisticos2);
    printf("Densidade: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pibpercapta2);
    printf("SUPERPODER: %.2f\n", superpoder2);
    printf("==============================\n");

    // RESULTADOS DAS COMPARAÇÕES
    printf("\n--- RESULTADO DAS DISPUTAS ---\n");

    printf("Populacao: ");
    if (populacao1 > populacao2) printf("Carta 1 venceu!\n");
    else if (populacao2 > populacao1) printf("Carta 2 venceu!\n");
    else printf("Empate!\n");

    printf("Area: ");
    if (area1 > area2) printf("Carta 1 venceu!\n");
    else if (area2 > area1) printf("Carta 2 venceu!\n");
    else printf("Empate!\n");

    printf("PIB: ");
    if (pib1 > pib2) printf("Carta 1 venceu!\n");
    else if (pib2 > pib1) printf("Carta 2 venceu!\n");
    else printf("Empate!\n");

    printf("Turismo: ");
    if (turisticos1 > turisticos2) printf("Carta 1 venceu!\n");
    else if (turisticos2 > turisticos1) printf("Carta 2 venceu!\n");
    else printf("Empate!\n");

    printf("Densidade (Menor vence): ");
    if (densidade1 < densidade2) printf("Carta 1 venceu!\n");
    else if (densidade2 < densidade1) printf("Carta 2 venceu!\n");
    else printf("Empate!\n");

    printf("PIB per Capita: ");
    if (pibpercapta1 > pibpercapta2) printf("Carta 1 venceu!\n");
    else if (pibpercapta2 > pibpercapta1) printf("Carta 2 venceu!\n");
    else printf("Empate!\n");

    printf("SUPERPODER: ");
    if (superpoder1 > superpoder2) printf("Carta 1 venceu!\n");
    else if (superpoder2 > superpoder1) printf("Carta 2 venceu!\n");
    else printf("Empate!\n");

    return 0;
}
