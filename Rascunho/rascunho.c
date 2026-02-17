
//#include <string.h>
/*
soma (+)
subtração (-)
multiplicação (*)
divisão (/)


//declaração das variaveis
int numero1, numero2, soma, subtracao, multiplicacao, divisao;

//alimentação dos dados
printf("Digite o número 01: ");
scanf("%d", &numero1);

printf("Digite o número 02: ");
scanf("%d", &numero2);

//forma genérica das opreações
soma = numero1+numero2; //operação soma
subtracao = numero1-numero2; //operação subtração
multiplicacao = numero1*numero2; //operação multiplicação
divisao = numero1/numero2; //operação divisão

printf("A soma dos números é: %d\n", soma);
printf("A subtração dos números é: %d\n", subtracao);
printf("A multiplicação dos números é: %d\n", multiplicacao);
printf("A divisão dos números é: %d\n", divisao);

atribuição de variaveis

atribuição com soma (+=)
atribuição com subtração (-=)
atribuição com multiplicação (*=)
atribuição com divisão (/=)



int numero1, numero2, resultado;

resultado=10;

    printf("Resultado: %d\n", resultado);
resultado+=20;
    printf("Resultado: %d\n", resultado);
resultado-=5;
    printf("Resultado: %d\n", resultado);
resultado*=2;
    printf("Resultado: %d\n", resultado);
resultado/=2;
    printf("Resultado: %d\n", resultado);
resultado++;
    printf("Resultado: %d\n", resultado);
resultado--;
    printf("Resultado: %d\n", resultado);

resultado=resultado--;
    printf("%d",resultado);
resultado=--resultado;
    printf("%d",resultado);
    


    
    float divisao, numero, numero1;

    printf("indique o número 1: \n");
        scanf(" %f",&numero);

    printf("indique o número 2: \n");
        scanf(" %f",&numero1);

    divisao=numero/numero1;
        printf("Resultado= \n");
        printf("%.2f", divisao);



int a=10 , b=3;
float resultado;

resultado=(float)a/b;
    printf("%.2f",resultado);







    // Criação das variáveis
    int populacao1, p_turistico1, populacao2, p_turistico2;
    float area1, pib1, area2, pib2;
    char cidade1[50], cidade2[50], estado1[10], estado2[10], codigo1[10], codigo2[10];

    // Dados primeira cidade
    printf("Nome da primeira cidade:\n");
    scanf(" %[^\n]", cidade1);  // lê linha com espaços Ex: São Paulo
    while(getchar() != '\n');    // limpa buffer após linha para não pular próximas leituras

    printf("Estado:\n");
    scanf("%s", estado1);        

    printf("Codigo:\n");
    scanf("%s", codigo1);        

    printf("Populacao:\n");
    scanf("%d", &populacao1);    

    printf("Area:\n");
    scanf("%f", &area1);         

    printf("PIB:\n");
    scanf("%f", &pib1);          

    printf("Pontos turisticos:\n");
    scanf("%d", &p_turistico1);  

    // Dados segunda cidade
    printf("\nNome da segunda cidade:\n");
    scanf(" %[^\n]", cidade2);   
    while(getchar() != '\n');    // limpa buffer após linha para não pular próximas leituras

    printf("Estado:\n");
    scanf("%s", estado2);        

    printf("Codigo:\n");
    scanf("%s", codigo2);

    printf("Populacao:\n");
    scanf("%d", &populacao2);

    printf("Area:\n");
    scanf("%f", &area2);

    printf("PIB:\n");
    scanf("%f", &pib2);

    printf("Pontos turisticos:\n");
    scanf("%d", &p_turistico2);

    // Apresentação dos dados
    printf("\n--- Primeira cidade ---\n");
    printf("Nome da cidade: %s\n", cidade1);
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", p_turistico1);

    printf("\n--- Segunda cidade ---\n");
    printf("Nome da cidade: %s\n", cidade2);
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", p_turistico2);

    



#include <stdio.h>

int main() {

int valor01, valor02, resultado;

valor01 = 10;
valor02 = 20;

resultado=(valor01<valor02);

printf(" %d ", resultado);


}

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    /*
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

    //printf("%.2f" , sp1);

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
*/


int escolhaJogador, escolhaPc;

    srand(time(0));
    escolhaPc=rand() %3 + 1;
    printf("%i", escolhaPc);

printf(" -Escolha uma opção- \n 1. Papel \n 2. Pedra \n 3. Tesoura");
scanf(escolhaJogador);

        switch (escolhaJogador)
        {
        case 1:
            printf("Jogador escolheu Papel");
        case 2:
            printf("Jogador escolheu Pedra");
        case 3:
            printf("Jogador escolheu Tesoura");
            break;
        default:
            printf("Opção inválida");
            break;
        }


        switch (escolhaPc)
        {
        case 1:
            printf("Computador escolheu Papel");
        case 2:
            printf("Computador escolheu Pedra");
        case 3:
            printf("Computador escolheu Tesoura");
            break;
        }


return 0;
} 

