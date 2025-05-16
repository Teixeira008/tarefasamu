//Faça um programa que calcule as raízes de uma equação do segundo grau, na forma ax² + bx + c.

#include <stdio.h>
#include <math.h>

int main(){
    float raiz_de_segundo, deltaX1, deltaX2, a, b, c;

    printf("digite o valor de a:\n");
    scanf("%f", &a);
    printf("digite o valor de b:\n");
    scanf("%f", &b);
    printf("digite o valor de c:\n");
    scanf("%f", &c);

    raiz_de_segundo = pow(b, 2) - 4 * a * c;
    deltaX1 = (-b - sqrt(raiz_de_segundo)) / (2*a);
    deltaX2 = (-b + sqrt(raiz_de_segundo)) / (2*a);
    printf("raiz 1: %f\n", deltaX1);
    printf("raiz 2: %f\n", deltaX2);
    return 0;



}