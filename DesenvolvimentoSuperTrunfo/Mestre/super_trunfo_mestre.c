#include <stdio.h>

int main() {
    // Criação das variáveis
    int p_turistico1, p_turistico2;
    float area1, pib1, area2, pib2, dp1, dp2, ppc1, ppc2, sp1, sp2;
    char cidade1[50], cidade2[50], estado1[10], estado2[10], codigo1[10], codigo2[10];
    unsigned long int populacao1, populacao2;

    // Dados primeira cidade
    printf("Nome da primeira cidade:\n");
    scanf(" %[^\n]", cidade1);  

    printf("Estado:\n");
    scanf("%s", estado1);        

    printf("Codigo:\n");
    scanf("%s", codigo1);        

    printf("Populacao:\n");
    scanf("%lu", &populacao1);    

    printf("Area:\n");
    scanf("%f", &area1);         

    printf("PIB:\n");
    scanf("%f", &pib1);          

    printf("Pontos turisticos:\n");
    scanf("%d", &p_turistico1);  

    dp1 = (float)populacao1 / area1;
    ppc1 = pib1 / (float)populacao1;
    sp1 = (populacao1 + area1 + pib1 + ppc1 + p_turistico1 + (-dp1));

    // Dados segunda cidade
    printf("\nNome da segunda cidade:\n");
    scanf(" %[^\n]", cidade2);   

    printf("Estado:\n");
    scanf("%s", estado2);        

    printf("Codigo:\n");
    scanf("%s", codigo2);

    printf("Populacao:\n");
    scanf("%lu", &populacao2);

    printf("Area:\n");
    scanf("%f", &area2);

    printf("PIB:\n");
    scanf("%f", &pib2);

    printf("Pontos turisticos:\n");
    scanf("%d", &p_turistico2);

    dp2 = (float)populacao2 / area2;
    ppc2 = pib2 / (float)populacao2;
    sp2 = (populacao2 + area2 + pib2 + ppc2 + p_turistico2 + (-dp2)); 

    // Escolha dos atributos
    int escolha1, escolha2;
    float soma1 = 0, soma2 = 0;

    // Menu de seleção de atributos mais visual

    printf("\nEscolha o primeiro atributo: ");
    printf("\n1. População\n2. Área\n3. PIB\n4. Pontos turísticos\n5. Densidade populacional\n");
    scanf("%d", &escolha1);

    do {
        printf("Escolha o segundo atributo (diferente do primeiro): ");
        scanf("%d", &escolha2);

        if (escolha2 == escolha1)
            printf("Você já escolheu esse atributo! Escolha outro.\n");

    } while (escolha2 == escolha1);

    // Exibe o cabeçalho Cidade1 X Cidade2 uma única vez
    printf("\n================ %s X %s ================\n", cidade1, cidade2);

    // Comparação do primeiro atributo
    switch (escolha1) {
        case 1: // População
            printf("\n--- Comparação da População ---\n");
            printf("%s: %lu\n", cidade1 , populacao1);
            printf("%s: %lu\n", cidade2 , populacao2);
            soma1 += populacao1;
            soma2 += populacao2;
            if (populacao1 > populacao2)
                printf("Resultado: A cidade %s venceu!\n", cidade1);
            else if (populacao2 > populacao1)
                printf("Resultado: A cidade %s venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;
        case 2: // Área
            printf("\n--- Comparação da Área ---\n");
            printf("%s: %.2f\n", cidade1, area1);
            printf("%s: %.2f\n", cidade2, area2);
            soma1 += area1;
            soma2 += area2;
            if (area1 > area2)
                printf("Resultado: A cidade %s venceu!\n", cidade1);
            else if (area2 > area1)
                printf("Resultado: A cidade %s venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;
        case 3: // PIB
            printf("\n--- Comparação do PIB ---\n");
            printf("%s: %.2f\n", cidade1, pib1);
            printf("%s: %.2f\n", cidade2, pib2);
            soma1 += pib1;
            soma2 += pib2;
            if (pib1 > pib2)
                printf("Resultado: A cidade %s venceu!\n", cidade1);
            else if (pib2 > pib1)
                printf("Resultado: A cidade %s venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;
        case 4: // Pontos Turísticos
            printf("\n--- Comparação dos Pontos Turísticos ---\n");
            printf("%s: %d\n", cidade1, p_turistico1);
            printf("%s: %d\n", cidade2, p_turistico2);
            soma1 += p_turistico1;
            soma2 += p_turistico2;
            if (p_turistico1 > p_turistico2)
                printf("Resultado: A cidade %s venceu!\n", cidade1);
            else if (p_turistico2 > p_turistico1)
                printf("Resultado: A cidade %s venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;
        case 5: // Densidade Populacional
            printf("\n--- Comparação da Densidade Populacional ---\n");
            printf("%s: %.2f\n", cidade1, dp1);
            printf("%s: %.2f\n", cidade2, dp2);
            soma1 += -dp1;  // Menor densidade vence, subtrai
            soma2 += -dp2;
            if (dp1 < dp2)
                printf("Resultado: A cidade %s venceu (menor densidade)!\n", cidade1);
            else if (dp2 < dp1)
                printf("Resultado: A cidade %s venceu (menor densidade)!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;
        default:
            printf("Opção inválida! Tente novamente.\n");
            break;
    }

    // Comparação do segundo atributo
    switch (escolha2) {
        case 1: // População
            printf("\n--- Comparação da População ---\n");
            printf("%s: %lu\n", cidade1 , populacao1);
            printf("%s: %lu\n", cidade2 , populacao2);
            soma1 += populacao1;
            soma2 += populacao2;
            if (populacao1 > populacao2)
                printf("Resultado: A cidade %s venceu!\n", cidade1);
            else if (populacao2 > populacao1)
                printf("Resultado: A cidade %s venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;
        case 2: // Área
            printf("\n--- Comparação da Área ---\n");
            printf("%s: %.2f\n", cidade1, area1);
            printf("%s: %.2f\n", cidade2, area2);
            soma1 += area1;
            soma2 += area2;
            if (area1 > area2)
                printf("Resultado: A cidade %s venceu!\n", cidade1);
            else if (area2 > area1)
                printf("Resultado: A cidade %s venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;
        case 3: // PIB
            printf("\n--- Comparação do PIB ---\n");
            printf("%s: %.2f\n", cidade1, pib1);
            printf("%s: %.2f\n", cidade2, pib2);
            soma1 += pib1;
            soma2 += pib2;
            if (pib1 > pib2)
                printf("Resultado: A cidade %s venceu!\n", cidade1);
            else if (pib2 > pib1)
                printf("Resultado: A cidade %s venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;
        case 4: // Pontos Turísticos
            printf("\n--- Comparação dos Pontos Turísticos ---\n");
            printf("%s: %d\n", cidade1, p_turistico1);
            printf("%s: %d\n", cidade2, p_turistico2);
            soma1 += p_turistico1;
            soma2 += p_turistico2;
            if (p_turistico1 > p_turistico2)
                printf("Resultado: A cidade %s venceu!\n", cidade1);
            else if (p_turistico2 > p_turistico1)
                printf("Resultado: A cidade %s venceu!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;
        case 5: // Densidade Populacional
            printf("\n--- Comparação da Densidade Populacional ---\n");
            printf("%s: %.2f\n", cidade1, dp1);
            printf("%s: %.2f\n", cidade2, dp2);
            soma1 += -dp1;
            soma2 += -dp2;
            if (dp1 < dp2)
                printf("Resultado: A cidade %s venceu (menor densidade)!\n", cidade1);
            else if (dp2 < dp1)
                printf("Resultado: A cidade %s venceu (menor densidade)!\n", cidade2);
            else
                printf("Resultado: Empate!\n");
            break;
        default:
            printf("Opção inválida! Tente novamente.\n");
            break;
    }

    // Comparação final das somas
    printf("\n--- Comparação final das somas ---\n");
    printf("%s: %.2f\n", cidade1, soma1);
    printf("%s: %.2f\n", cidade2, soma2);

    if (soma1 > soma2)
        printf("Resultado final: A cidade %s venceu!\n", cidade1);
    else if (soma2 > soma1)
        printf("Resultado final: A cidade %s venceu!\n", cidade2);
    else
        printf("Resultado final: Empate!\n");

    return 0;
}