#include <stdio.h>
#include <math.h>

int main(){
    int numero[10], soma;
    int tamanho = sizeof(numero) / sizeof(numero[0]);

    int maior = numero[0];
    int menor = numero[0];

    for(int i = 1; i < tamanho; i++){
        if(numero[i] > maior){
            maior = numero[i];
        } else {
            menor = numero[i];
        }
    }   
    soma = maior + menor;
    printf("a soma sera:%d\n", soma);
    printf("maior  numero %d\n", maior);
    printf("menor numero %d\n", menor);

}