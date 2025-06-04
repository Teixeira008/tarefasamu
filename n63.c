#include <stdio.h>
#include <math.h>

int main(){
    int numero[1000], soma;
    int tamanho;
    
    
    printf("digite quantos termos vc deseja usar (ate 1000): \n");
    scanf("%d", &tamanho);  
    if(tamanho <= 0 || tamanho > 1000){
        printf("valores invalidos");
        return 1;
    }
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numero[i]);
    }

    int maior = numero[0];
    int menor = numero[0];

    for(int i = 1; i < tamanho; i++){
        if(numero[i] > maior){
            maior = numero[i];
        }
        if(numero[i] < menor) {
            menor = numero[i];
        }
    }   
    soma = maior + menor;
    printf("a soma sera:%d\n", soma);
    printf("maior  numero %d\n", maior);
    printf("menor numero %d\n", menor);

}