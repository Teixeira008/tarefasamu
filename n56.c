#include <stdio.h>
#include <math.h>

int main(){
    int num1, num2, soma = 0;
    printf("digite um numero inteiro:\n");
    scanf("%d", &num1);
    printf("digite outro numero inteiro:\n");
    scanf("%d", &num2);

    for(int i = num1; i < num2; i++){
        printf("%d ", i);
    }

    for(int i = num1; i < num2; i++){
        soma += i; 
    }
    printf("soma:%d", soma);
    return 0;

}
