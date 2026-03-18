#include <stdio.h>

void torre(int casas){
    if (casas > 0)
    {
        printf("Direita\n");
        torre(casas -1);
    }
}

void rainha(int casas){
    if (casas<8)
    {
        printf("Esquerda\n");
        rainha(casas +1);
    }
}

void bispo(){
    for (int y = 0; y < 5; y++)
    {
        for (int x = 0; x < 5; x++)
        {
            if (y==x)
            {
                printf("Acima\nDireita\n");
            } 
        }   
    }
    }

void cavalo(){
    int x=4, y=0;
    do
    {
        if (y < x){
                printf("Cima\n");
            }else{
            printf("Direita\n");
        }
        y++; x--;
    } while (y<3);
}


int main(){
    printf("\n* Movimentação da torre*\n");
        torre(5);
    printf("\n* Movimentação da rainha *\n");
        rainha(0);
    printf("\n* Movimentação do bispo *\n");
        bispo();
    printf("\n* Movimentação do cavalo *\n");
        cavalo();
return 0;
}

