#include <stdio.h>

int main() {

int a=20, b=30;
char* maior;

//condição ? valor_se_verdadeiro : valor_se_falso;

maior = (a>b) ? "a é maior" : "b é maior";


printf("%s", maior);

return 0;

}