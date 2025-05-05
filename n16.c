#include <math.h>
#include <stdio.h>

int main(){
    float metros, lata, calc, valor, lado, area;
    printf("Quantos metros quadrados vc deseja pintar?\n");
    scanf("%f", &lado);
    // calculando a area
    area = pow(lado, 2);

    calc = lado * 3;

    lata = calc / 18;
    
    valor = lata * 80;

    printf("vc precisara de:%f latas\n", lata);

    printf("que saira no valor de:%f\n", valor);
    
       
   


}     