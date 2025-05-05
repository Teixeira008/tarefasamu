//Faça um programa que pergunte o preço de três produtos e informe qual produto você deve comprar, sabendo que a decisão é sempre pelo mais barato.

#include <stdio.h>

int main(){
    int valor1, valor2, valor3;
    

    printf("indique o primeiro valor\n");
    scanf("%d", &valor1);
    printf("indique o segundo valor\n");
    scanf("%d", &valor2);
    printf("indique o terceiro valor\n");
    scanf("%d", &valor3);

    if(valor1 < valor2){
        printf("o primeiro produto e o mais barato\n", valor1);
    } else if(valor2 < valor1){
        printf("o segudo produto e o mais barato\n", valor2);
    } else {
        printf("o terceiro produto e o mais barato", valor3);
    }
    
}