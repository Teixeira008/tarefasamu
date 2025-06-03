#include <math.h>
#include <stdio.h>

int main(){
    float base, numero = 1;
    int expoente;
    

    printf("digite a base:\n");
    scanf("%f", &base);
    printf("digite o expoente:\n");
    scanf("%d", &expoente);

    for(int i = 1; i <= expoente; i++){
        numero *= base;
    }
    printf("%f elevado a %d e = %f\n", base, expoente, numero);

}