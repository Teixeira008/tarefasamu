#include <stdio.h>
#include <math.h>

int main(){
    float num;
    int fatorial = 1;

    printf("digite o numero fatorial\n");
    scanf("%f", &num);

    for(int i = 1; i <= num; i++){
        fatorial *= i;
    }
    printf("fatorial de %f sera %d:\n", num, fatorial);
}