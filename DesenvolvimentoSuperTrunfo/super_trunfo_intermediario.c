#include <stdio.h>

int main() {
   // Criação das variáveis
    int p_turistico1, p_turistico2, escolha;
    float area1, pib1, area2, pib2, dp1, dp2, ppc1, ppc2, sp1, sp2;
    char cidade1[50], cidade2[50], estado1[10], estado2[10], codigo1[10], codigo2[10];
    unsigned long int  populacao1, populacao2;

    // Dados primeira cidade
    printf("Nome da primeira cidade:\n");
    scanf(" %[^\n]", cidade1);  // lê linha com espaços Ex: São Paulo

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

    //calculando densidade populacional

    dp1=(float)populacao1/area1;

    //calculando pib per capta

    ppc1=pib1/(float)populacao1;

    //calculando super poder

    sp1=(populacao1 + area1 + pib1 + ppc1 + p_turistico1 + (-dp1));

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

    //calculando densidade populacional

    dp2=(float)populacao2/area2;

    //calculando pib per capta

    ppc2=pib2/(float)populacao2;

    //calculando super poder

    sp2=(populacao2 + area2 + pib2 + ppc2 + p_turistico2 + (-dp2)); 

    //menu de escolha

        printf("--- Escolha qual atributo será comparado ---\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. Pib\n");
        printf("4. Pontos turísticos\n");
        printf("5. Densidade populacional\n");

        scanf("%i", &escolha);

switch (escolha)
    {
    case 1: // População
        printf("\nCarta 01: %s X Carta 02: %s\n", cidade1, cidade2);
        printf("Atributo: População\n");
        printf("População carta 01: %lu\n", populacao1);
        printf("População carta 02: %lu\n", populacao2);

        if (populacao1 > populacao2) {
            printf("Resultado: A cidade %s venceu!\n", cidade1);
        } else if (populacao2 > populacao1) {
            printf("Resultado: A cidade %s venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
        break;

    case 2: // Área
        printf("\nCarta 01: %s X Carta 02: %s\n", cidade1, cidade2);
        printf("Atributo: Área\n");
        printf("Área carta 01: %.2f\n", area1);
        printf("Área carta 02: %.2f\n", area2);

        if (area1 > area2) {
            printf("Resultado: A cidade %s venceu!\n", cidade1);
        } else if (area2 > area1) {
            printf("Resultado: A cidade %s venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
        break;

    case 3: // PIB
        printf("\nCarta 01: %s X Carta 02: %s\n", cidade1, cidade2);
        printf("Atributo: PIB\n");
        printf("PIB carta 01: %.2f\n", pib1);
        printf("PIB carta 02: %.2f\n", pib2);

        if (pib1 > pib2) {
            printf("Resultado: A cidade %s venceu!\n", cidade1);
        } else if (pib2 > pib1) {
            printf("Resultado: A cidade %s venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
        break;

    case 4: // Pontos Turísticos
        printf("\nCarta 01: %s X Carta 02: %s\n", cidade1, cidade2);
        printf("Atributo: Pontos Turísticos\n");
        printf("Pontos carta 01: %d\n", p_turistico1);
        printf("Pontos carta 02: %d\n", p_turistico2);

        if (p_turistico1 > p_turistico2) {
            printf("Resultado: A cidade %s venceu!\n", cidade1);
        } else if (p_turistico2 > p_turistico1) {
            printf("Resultado: A cidade %s venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
        break;

    case 5: // Densidade Populacional (Menor valor vence)
        printf("\nCarta 01: %s X Carta 02: %s\n", cidade1, cidade2);
        printf("Atributo: Densidade Populacional\n");
        printf("Densidade carta 01: %.2f\n", dp1);
        printf("Densidade carta 02: %.2f\n", dp2);

        
        if (dp1 < dp2) {
            printf("Resultado: A cidade %s venceu (menor densidade)!\n", cidade1);
        } else if (dp2 < dp1) {
            printf("Resultado: A cidade %s venceu (menor densidade)!\n", cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
        break;

    default:
        printf("Opção inválida! Tente novamente.\n");
        break;
    }

return 0;
} 
