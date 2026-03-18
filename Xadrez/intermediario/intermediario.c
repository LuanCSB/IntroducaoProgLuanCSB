#include <stdio.h>
int main(){

    int c_torre, c_bispo, c_rainha, c_cavalo, c_cavalo1;


//Apresentação
    printf("----- MOVIMENTAÇÃO PEÇAS XADREZ -----\n");

    //TORRE

        printf("\n* Torre *\n");

        //Iniciando a variável
            c_torre=0;

        //Movimentando a peça
            while (c_torre<5)
            {
                printf("Torre para direita\n");
                c_torre++;
            }


    //BISPO

        printf("\n* Bispo *\n");

        //Iniciando a variável
            c_bispo=0;

        //Movimentando a peça
            do
            {
                printf("Bispo para direita a cima\n");
                c_bispo++;
            } while (c_bispo<5);
                

    //RAINHA

        printf("\n* Rainha *\n");

        //Movimentando a peça 
            for (c_rainha = 0; c_rainha < 8; c_rainha++)
            {
                printf("Rainha para esquerda\n");
            }
            
    //CAVALO
            printf("\n* Cavalo *\n");
        
        //Iniciando a variável
            c_cavalo=1;

        //Movimentando a peça
            while (c_cavalo <= 1)
            {
                
                for (c_cavalo1 = 1; c_cavalo1 <= 2; c_cavalo1++)
                {
                    printf("Cavalo para baixo\n");
                }
                c_cavalo++;
                printf("Cavalo para esquerda\n");
                
            }
            

return 0;
}

