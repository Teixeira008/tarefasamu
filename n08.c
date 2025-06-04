// Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.

#include <stdio.h>
#include <math.h>

int main(){
    int s_ph, h_tb, d_mes, total;
    
    printf("valor que ganha por hora:\n");
    scanf("%d", &s_ph);

    printf("quantos horas vc trabalha:\n");
    scanf("%d", &h_tb);

    total = s_ph * h_tb;
    printf("Seu salario total e:%d\n", total);
}
