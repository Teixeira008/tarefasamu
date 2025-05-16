#include <stdio.h>

int main(){
    float lado1, lado2, lado3;
    

    printf("digite o primeiro lado do trinagulo para identificar o tipo que ele é:\n");
    scanf("%f", &lado1);
    printf("digite o segundo lado do trinagulo para identificar o tipo que ele é:\n");
    scanf("%f", &lado2);
    printf("digite o terceiro lado do trinagulo para identificar o tipo que ele é:\n");
    scanf("%f", &lado3);

    if(lado1 == lado2 && lado2 == lado3){
        printf("o triangulo é equilatero\n");
    } else if(lado1 == lado2 || lado2 == lado3 || lado1 == lado3){
        printf("o triangulo é isosceles\n");
        } else {
            printf("o triangulo é escaleno\n");
    }

    
}