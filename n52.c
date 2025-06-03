
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>


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
            return 0;



}