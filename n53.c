#include <math.h>
#include <stdio.h>

int main(){
    float num[5];
    for(int i = 0; i < 5; i++){
    printf("digite 5 numero:\n");
    scanf("%f", &num[i]);
    }

    float maior = -INFINITY;

    for(int i = 0; i <  5; i++){
        if(num[i] > maior){
            maior = num[i];
        }
    }
    printf("maior valor: %.2f\n", maior);
            
    
    
    float soma = 0, media;
    for( int i = 0; i < 5; i++){
        soma += num[i];
    }
    printf("soma: %.2f\n", soma);

    for(int i = 0; i < 5; i++){
        media = soma / 5;
        }
        printf("media: %.2f\n", media);

}