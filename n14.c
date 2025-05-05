#include <stdio.h>
#include <math.h>

int main(){
    int peso, excesso;

    printf("peso do peixe\n");
    scanf("%d", &peso);

    if(peso > 50){
        excesso = peso * 4;
        printf("vc devera pagar:%d\n", excesso);
    }else{
        printf("vc nao pagara nada");
    }
    

}