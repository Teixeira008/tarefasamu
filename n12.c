#include <stdio.h>
#include <math.h>

int main(){
    float alturaH, alturaM, calc, resultH, resultM;

    printf("Se vc quer calcular para homem coloque 1, para melher 2\n");
    scanf("%f", &calc);

    
    if(calc == 1){
        printf("Coloque sua altura\n");
        scanf("%f", &alturaH);

        resultH = 72.7 * alturaH - 58;

        printf("seu peso ideal é %f", resultH);

    } else if (calc == 2){
        printf("Coloque sua altura\n");
        scanf("%f", &alturaM);

        resultM = 62.1 * alturaM - 44.7;

        printf("seu peso ideal é %f", resultM);

    }
    
} 