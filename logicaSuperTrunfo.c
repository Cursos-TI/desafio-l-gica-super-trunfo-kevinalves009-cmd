#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[5], codigo2[5], cidade1[20], cidade2[20];
    int turisticos1, turisticos2, opt1, opt2;
    float area1, pib1, area2, pib2;
    unsigned long int populacao1, populacao2;

    // --- CADASTRO DAS CARTAS ---
    printf("Cadastro Carta 1 (Cidade): "); scanf("%s", cidade1);
    printf("Populacao: "); scanf("%lu", &populacao1);
    printf("Area: "); scanf("%f", &area1);
    printf("PIB: "); scanf("%f", &pib1);
    printf("Pontos Turisticos: "); scanf("%d", &turisticos1);

    printf("\nCadastro Carta 2 (Cidade): "); scanf("%s", cidade2);
    printf("Populacao: "); scanf("%lu", &populacao2);
    printf("Area: "); scanf("%f", &area2);
    printf("PIB: "); scanf("%f", &pib2);
    printf("Pontos Turisticos: "); scanf("%d", &turisticos2);

    // --- CÁLCULOS ---
    float densidade1 = (float)populacao1 / area1;
    float densidade2 = (float)populacao2 / area2;
    float pibPercapta1 = pib1 / (float)populacao1;
    float pibPercapta2 = pib2 / (float)populacao2;

    // Super Poder 
    float super1 = (float)populacao1 + area1 + pib1 + turisticos1 + pibPercapta1 - densidade1;
    float super2 = (float)populacao2 + area2 + pib2 + turisticos2 + pibPercapta2 - densidade2;

    // --- SELEÇÃO DE ATRIBUTOS ---
    printf("\n1. Populacao | 2. Area | 3. PIB | 4. Turisticos | 5. Densidade | 6. Super Poder\n");
    printf("Escolha o 1º atributo: "); scanf("%d", &opt1);

    //  SALVANDO VALORES ESCOLHIDOS

    float val1_C1, val1_C2;
    switch(opt1) {
        case 1: val1_C1 = (float)populacao1; val1_C2 = (float)populacao2; break;
        case 2: val1_C1 = area1; val1_C2 = area2; break;
        case 3: val1_C1 = pib1; val1_C2 = pib2; break;
        case 4: val1_C1 = (float)turisticos1; val1_C2 = (float)turisticos2; break;
        case 5: val1_C1 = -densidade1; val1_C2 = -densidade2; break; 
        case 6: val1_C1 = super1; val1_C2 = super2; break;
        default: return 0;
    }

    printf("Escolha o 2º atributo (diferente do %d): ", opt1); scanf("%d", &opt2);
    if(opt1 == opt2) { printf("Atributos iguais!\n"); return 0; }

    float val2_C1, val2_C2;
    switch(opt2) {
        case 1: val2_C1 = (float)populacao1; val2_C2 = (float)populacao2; break;
        case 2: val2_C1 = area1; val2_C2 = area2; break;
        case 3: val2_C1 = pib1; val2_C2 = pib2; break;
        case 4: val2_C1 = (float)turisticos1; val2_C2 = (float)turisticos2; break;
        case 5: val2_C1 = -densidade1; val2_C2 = -densidade2; break; 
        case 6: val2_C1 = super1; val2_C2 = super2; break;
        default: return 0;
    }

        // --- LÓGICA DE NOMES DOS ATRIBUTOS  ---
    char *nomeAttr1, *nomeAttr2;
    char *nomes[] = {"", "Populacao", "Area", "PIB", "Pontos Turisticos", "Densidade Demografica", "Super Poder"};
    nomeAttr1 = nomes[opt1];
    nomeAttr2 = nomes[opt2];

    // --- CÁLCULO FINAL ---
    float soma1 = val1_C1 + val2_C1;
    float soma2 = val1_C2 + val2_C2;

    // --- IDENTIFICAÇÃO DOS NOMES 
    char *nomeAttr1, *nomeAttr2;

    switch(opt1) {
        case 1: nomeAttr1 = "Populacao"; break;
        case 2: nomeAttr1 = "Area"; break;
        case 3: nomeAttr1 = "PIB"; break;
        case 4: nomeAttr1 = "Pontos Turisticos"; break;
        case 5: nomeAttr1 = "Densidade Demografica"; break;
        case 6: nomeAttr1 = "Super Poder"; break;
    }

    switch(opt2) {
        case 1: nomeAttr2 = "Populacao"; break;
        case 2: nomeAttr2 = "Area"; break;
        case 3: nomeAttr2 = "PIB"; break;
        case 4: nomeAttr2 = "Pontos Turisticos"; break;
        case 5: nomeAttr2 = "Densidade Demografica"; break;
        case 6: nomeAttr2 = "Super Poder"; break;
    }

    // --- CÁLCULO FINAL ---
    float soma1 = val1_C1 + val2_C1;
    float soma2 = val1_C2 + val2_C2;

    // --- EXIBIÇÃO CLARA DO RESULTADO ---
    printf("\n----------------------------------------\n");
    printf("\n       RESULTADO DO DUELO DE CARTAS     ");
    printf("\n----------------------------------------\n");

    // Exibição Carta 1
    printf("CIDADE 1: %s\n", cidade1);
    printf("- %s: %.2f\n", nomeAttr1, (opt1 == 5) ? (val1_C1 * -1) : val1_C1);
    printf("- %s: %.2f\n", nomeAttr2, (opt2 == 5) ? (val2_C1 * -1) : val2_C1);
    printf(">> SOMA TOTAL: %.2f\n", soma1);

    printf("\n----------------------------------------\n");

    // Exibição Carta 2
    printf("CIDADE 2: %s\n", cidade2);
    printf("- %s: %.2f\n", nomeAttr1, (opt1 == 5) ? (val1_C2 * -1) : val1_C2);
    printf("- %s: %.2f\n", nomeAttr2, (opt2 == 5) ? (val2_C2 * -1) : val2_C2);
    printf(">> SOMA TOTAL: %.2f\n", soma2);

    printf("\n========================================\n");

    // Lógica de Vencendor 
    if (soma1 > soma2) {
        printf("RESULTADO: %s VENCEU!\n", cidade1);
    } else if (soma2 > soma1) {
        printf("RESULTADO: %s VENCEU!\n", cidade2);
    } else {
        printf("RESULTADO: EMPATE!\n");
    }
    printf("========================================\n");

    return 0;
}

