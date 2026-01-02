#include <stdio.h>
#include <string.h>
int main(){ 

    //criação das variáveis
    int populacao1 , p_turistico1, populacao2 , p_turistico2;
    char cidade1[50], estado1[3], codigo1[5], cidade2[50], estado2[3], codigo2[5];
    float area1, pib1, area2, pib2;
    
    //solicitando as características da primeira cidade
    printf("Qual o nome da primeira cidade\n");
        //scanf(" %s", cidade1);
        fgets(cidade1,50,stdin);
            cidade1[strcspn(cidade1,"\n")]=0;
    printf("Qual o estado da cidade?\n");
        scanf(" %s", estado1);
    printf("Qual o código da cidade?\n");
        scanf(" %s", codigo1);
    printf("Qual a população da cidade?\n");
        scanf(" %d",&populacao1);
    printf("Qual a Área da cidade?\n");
        scanf(" %f",&area1);
    printf("Qual o PIB da cidade?\n");
        scanf(" %f",&pib1);
    printf("Quantos pontos tuísticos a sua cidade?\n");
        scanf(" %d",&p_turistico1);

    //solicitando as características da segunda cidade    
    
    printf("Qual o nome da segunda cidade\n");
        //scanf(" %s",cidade2);
        fgets(cidade2,50,stdin);
         cidade2[strcspn(cidade2,"\n")]=0;
    printf("Qual o estado da cidade?\n");
        scanf(" %s",estado2);
    printf("Qual o código da cidade?\n");
        scanf(" %s",codigo2);
    printf("Qual a população da cidade?\n");
        scanf(" %d",&populacao2);
    printf("Qual a Área da cidade?\n");
        scanf(" %f",&area2);
    printf("Qual o PIB da cidade?\n");
        scanf(" %f",&pib2);
    printf("Quantos pontos tuísticos a sua cidade?\n");
        scanf(" %d",&p_turistico2);
        
        
    //apresentando dados cidade01
    printf("-------------------------------------\n");
    printf("Informações primeira cidade\n");
    printf("Nome da cidade:%s\n", cidade1);
    printf("Estado da cidade:%s\n", estado1);
    printf("Código da cidade:%s\n", codigo1);
    printf("População da cidade:%d\n", populacao1);
    printf("Área da cidade:%.2f\n", area1);
    printf("PIB da cidade:%.2f\n", pib1);
    printf("Número de pontos turisticos da cidade:%d\n", p_turistico1);
    printf("------------------------------------\n");
    
    //apresentando dados cidade02
    /*
    printf("-------------------------------------\n");
    printf("Informações segunda cidade\n");
    printf("Nome da cidade:%s\n", cidade2);
    printf("Estado da cidade:%s\n", estado2);
    printf("Código da cidade:%s\n", codigo2);
    printf("População da cidade:%d\n", populacao2);
    printf("Área da cidade:%.2f\n", area2);
    printf("PIB da cidade:%.2f\n", pib2);
    printf("Número de pontos turisticos da cidade:%d\n", p_turistico2);
    printf("------------------------------------");
    */
    return(0);
    } 