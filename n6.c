// aça um Programa que peça o raio de um círculo, calcule e mostre sua área.


#include <stdio.h>
#include <math.h>

int main(){
    int raio, mult;
    printf("digite o raio do circulo:\n");
    scanf("%d", &raio);
    mult = M_PI * pow(raio,2);
    printf("o valor e %d", mult);

}