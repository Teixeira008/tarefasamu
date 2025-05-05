// Faça um Programa que peça a temperatura em graus Celsius, transforme e mostre em graus Farenheit.

#include <stdio.h>
#include <math.h>

int main(){
    int F, C;

    printf("Temperatura e Celsius:\n");
    scanf("%d", &C);

    F =  (C * 9/5) + 32;

    printf("O valor em celsius sera:%d\n", F);
}