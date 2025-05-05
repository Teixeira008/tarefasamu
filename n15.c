#include <stdio.h>
#include <math.h>

int main(){
    float Im, INSS, Sdc, salario, Sl;

    printf("Digite seu salario bruto:\n");
    scanf("%f", &salario);

    Im = salario * 0.11;    
    printf("Seu salario com o imposto de renda sera de:%2f\n", Im);

    INSS = salario * 0.08;
    printf("Seu salario com o INSS sera de:%2f\n", INSS);

    Sdc = salario * 0.05;
    printf("Seu salario com o Sindicato sera de:%2f\n", Sdc);
    
    Sl =  salario - (Im + INSS + Sdc);
    printf("Seu salario liquido sera de:%2f\n", Sl);
}
