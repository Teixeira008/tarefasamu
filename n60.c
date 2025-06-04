#include <stdio.h>
#include <math.h>

int main(){
    int termo;
    int num1 = 0, num2 = 1, proximo_numero;
    printf("quantos termos tera?:\n");
    scanf("%d", &termo);


    for(int i = 0; i < termo; i++){
        printf("%d ", num1);
        proximo_numero = num1 + num2;
        num1  = num2;
        num2 = proximo_numero;

    }
    printf("\n ");
    return 0;
}
