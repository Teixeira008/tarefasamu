// Faça um Programa que peça a temperatura em graus Farenheit, transforme e mostre a temperatura em graus Celsius. C = (5 * (F-32) / 9).
#include <stdio.h>
#include <math.h>

int main(){
    int F, C;

    printf("Temperatura e Farenheit:\n");
    scanf("%d", &F);

    C =  (5 * (F-32) / 9);

    printf("O valor em celsius sera:%d\n", C);
}
