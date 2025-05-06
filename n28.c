//Faça um Programa que pergunte em que turno você estuda. Peça para digitar M-matutino ou V-Vespertino ou N- Noturno.
#include <stdio.h>

int main(){
    char perido[3] = {"M", "V", "N"};


    for(char i; i < 3; i++){
        printf("digite o peridodo que vc estuda, M-matutino ou V-Vespertino ou N- Noturno");
        scanf("%d", &perido[i]);
    }

    for(char i; i = 1; i++){
        printf("vc estuda no perido na manha %d", perido[1]);
    }
}