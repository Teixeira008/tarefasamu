//Faça um Programa que peça um número e informe se o número é inteiro ou decimal. Dica: utilize uma função de arredondamento.

#include <stdio.h>
#include <math.h>


int main(){
    float numero;
    printf("digite um valor:\n");
    scanf("%f",&numero);

    if(floor(numero)== numero){
    printf("o valor e inteiro\n");
    } else {
        printf("o valor e decimal\n");
    }
}