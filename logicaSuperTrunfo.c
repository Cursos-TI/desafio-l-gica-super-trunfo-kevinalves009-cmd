#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[20], cidade2[20];
    int turisticos1, turisticos2;
    float area1, pib1, area2, pib2;
    unsigned long int populacao1, populacao2;
    int opcao;

    // --- CADASTRO CARTA 1 ---
    printf("------- CARTA 1 -------\n");
    printf("Estado (Letra): "); scanf(" %c", &estado1);
    printf("Codigo: "); scanf("%s", codigo1);
    printf("Cidade: "); scanf(" %s", cidade1); 
    printf("Populacao: "); scanf("%lu", &populacao1);
    printf("Area: "); scanf("%f", &area1);
    printf("PIB: "); scanf("%f", &pib1);
    printf("Pontos Turisticos: "); scanf("%d", &turisticos1);

    // --- CADASTRO CARTA 2 ---
    printf("\n------- CARTA 2 -------\n");
    printf("Estado (Letra): "); scanf(" %c", &estado2);
    printf("Codigo: "); scanf("%s", codigo2);
    printf("Cidade: "); scanf(" %s", cidade2); 
    printf("Populacao: "); scanf("%lu", &populacao2);
    printf("Area: "); scanf("%f", &area2);
    printf("PIB: "); scanf("%f", &pib2);
    printf("Pontos Turisticos: "); scanf("%d", &turisticos2);

    // --- CÁLCULOS ---
    float densidade1 = (float)populacao1 / area1;
    float densidade2 = (float)populacao2 / area2;
    float pibpercapta1 = pib1 / (float)populacao1; 
    float pibpercapta2 = pib2 / (float)populacao2;

    // Cálculo do Super Poder: Soma de tudo
    float super1 = (float)populacao1 + area1 + pib1 + turisticos1 + pibpercapta1 - densidade1;
    float super2 = (float)populacao2 + area2 + pib2 + turisticos2 + pibpercapta2 - densidade2;

    // --- MENU INTERATIVO ---
    printf("\n--- ESCOLHA O ATRIBUTO DE DISPUTA ---\n");
    printf("1. Populacao\n2. Area\n3. PIB\n4. Pontos Turisticos\n5. Densidade Demografica\n6. SUPER PODER\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    printf("\n==========================================\n");
    switch (opcao) {
        case 1:
            printf("Atributo: Populacao\n%s: %lu | %s: %lu\n", cidade1, populacao1, cidade2, populacao2);
            if (populacao1 > populacao2) printf("VENCEU: %s\n", cidade1);
            else if (populacao2 > populacao1) printf("VENCEU: %s\n", cidade2);
            else printf("EMPATE!\n");
            break;
        case 2:
            printf("Atributo: Area\n%s: %.2f | %s: %.2f\n", cidade1, area1, cidade2, area2);
            if (area1 > area2) printf("VENCEU: %s\n", cidade1);
            else if (area2 > area1) printf("VENCEU: %s\n", cidade2);
            else printf("EMPATE!\n");
            break;
        case 3:
            printf("Atributo: PIB\n%s: %.2f | %s: %.2f\n", cidade1, pib1, cidade2, pib2);
            if (pib1 > pib2) printf("VENCEU: %s\n", cidade1);
            else if (pib2 > pib1) printf("VENCEU: %s\n", cidade2);
            else printf("EMPATE!\n");
            break;
        case 4:
            printf("Atributo: Pontos Turisticos\n%s: %d | %s: %d\n", cidade1, turisticos1, cidade2, turisticos2);
            if (turisticos1 > turisticos2) printf("VENCEU: %s\n", cidade1);
            else if (turisticos2 > turisticos1) printf("VENCEU: %s\n", cidade2);
            else printf("EMPATE!\n");
            break;
        case 5:
            printf("Atributo: Densidade Demografica\n%s: %.2f | %s: %.2f\n", cidade1, densidade1, cidade2, densidade2);
            if (densidade1 < densidade2) printf("VENCEU: %s\n", cidade1); // Menor vence
            else if (densidade2 < densidade1) printf("VENCEU: %s\n", cidade2);
            else printf("EMPATE!\n");
            break;
        case 6:
            printf("Atributo: *** SUPER PODER ***\n%s: %.2f | %s: %.2f\n", cidade1, super1, cidade2, super2);
            if (super1 > super2) printf("VENCEU: %s\n", cidade1);
            else if (super2 > super1) printf("VENCEU: %s\n", cidade2);
            else printf("EMPATE!\n");
            break;
        default:
            printf("Opção inválida!\n");
    }
    printf("==========================================\n");

    return 0;
}
