//Faça um Programa que peça um número correspondente a um determinado ano e em seguida informe se este ano é ou não bissexto.

#include <stdio.h>

int main(){
    
    int ano;

    printf("digite o ano para avaliarmos:\n");
    scanf("%d", &ano);

    if(ano % 4 == 0){
        printf("o ano e bissexto\n");
    } else {
        printf("o ano nao e bissexto\n");
    }
}