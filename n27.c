//Faça um Programa que leia três números e mostre-os em ordem decrescente.

#include <stdio.h>

int main(){
    int n[3];
    int tamanho = sizeof(n) / sizeof(n[0]);
    int maior = -1;
    int menor = -1;
    for (int i = 0; i < 3; i++){
        printf("digite 3 valores\n");
        scanf("%d", &n[i]);
    }
    for(int i = 0; i < tamanho; i++){
        if(n[i] > maior){
            maior = n[i];
        }
    }
        printf("o maior numero sera %d\n", menor);
    
    for(int i = 0; i > tamanho; i++){
        if(n[i] >  menor){
                menor = n[i];
        }
    }
        printf("o maior numero sera %d\n", menor);
}