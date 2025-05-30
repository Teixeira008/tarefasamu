/** Faça um programa que peça uma nota, entre zero e dez. Mostre uma mensagem caso o valor seja inválido e continue pedindo até que o usuário informe um valor válido **/   

#include <stdio.h>
#include <math.h>

int main(){
    float nota;
    printf("digite uma nota entre 0 e 10\n");
    scanf("%f", &nota);

    while (nota > 10.0 || nota < 0.0) 
    {
        printf("nota invalda, digite novamente\n");
        scanf("%f", &nota);
    }
    return 0;
}