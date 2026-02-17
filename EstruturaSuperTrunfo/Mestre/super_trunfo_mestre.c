#include <stdio.h>

int main() {
   // Criação das variáveis
    int p_turistico1, p_turistico2;
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

    // Apresentação das cidades
    printf("\n--- Primeira cidade ---\n");
    printf("Nome da cidade: %s\n", cidade1);
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);

    printf("\n--- Segunda cidade ---\n");
    printf("Nome da cidade: %s\n", cidade2);
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);   

    // Comparação das cartas

    printf("\n--- Comparação das cartas ---\n");
    printf("População, carta 01 venceu? %d\n", populacao1>populacao2);
    printf("Area, carta 01 venceu? %d\n", area1>area2);
    printf("PIB, carta 01 venceu? %d\n", pib1>pib2);
    printf("Pontos turisticos, carta 01 venceu? %d\n", p_turistico1>p_turistico2);
    printf("Densidade populacional, carta 01 venceu? %d\n", dp1<dp2);
    printf("Pib per capta: %d\n",ppc1>ppc2);
    printf("Super poder, carta 01 venceu? %d\n", sp1>sp2);

return 0;
} 
