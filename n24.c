#include <stdio.h>
#include <math.h>
#include <string.h>


int main(){

    float num1, num2, num3;

    printf("digite 1 numero:\n");
    scanf("%f", &num1);
    printf("digite outro numero:\n");
    scanf("%f", &num2);
    printf("digite outro numero:\n");
    scanf("%f", &num3);

    if( num1 > num2 && num1 >  num2){
        printf("%f o numero maior e o:\n", num1);
    } else if(num2 > num1 && num2 > num3){
        printf("%f o numero maior e o:\n", num2);
    } else {
        printf("%f o numero maior e o:\n", num3);
    }

    if( num1 < num2 && num1 <  num2){
        printf("%f o numero menor e o:\n", num1);
    } else if(num2 < num1 && num2 < num3){
        printf("%f o numero menor e o:\n", num2);
    } else {
        printf("%f o numero menor e o:\n", num3);
    }
}