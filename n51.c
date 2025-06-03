// Faça um programa que imprima na tela os números de 1 a 20, um abaixo do outro. Depois modifique o programa para que ele mostre os números um ao lado do outro.

#include <stdio.h>

int main(){
    int i;

    for(int i = 1; i <=20; i++){
        printf("%d\n", i);
        }

    for(int i = 1; i <= 20; i++){
        printf("%d ", i);
    }
}