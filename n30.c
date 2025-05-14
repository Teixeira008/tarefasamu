#include <stdio.h>


int main(){
    float salario_bruto, horas, valor, IR, valIR, INSS, FGTS, total_de_desconto, salario_liquido;

    printf("digite suas valor das horas trabalhadas\n");
    scanf("%f", &valor);
    printf("digite as horas trabalhadas\n");
    scanf("%f", &horas);

    salario_bruto = valor * horas;

    if(salario_bruto <= 900){
        valIR = 0.00;
    } else if(salario_bruto <= 1500){
        valIR = 5;
        } else if(salario_bruto <= 2500){
            valIR = 10;
            } else if (salario_bruto >= 2500){
                valIR = 20;
                } else {
                    printf("salario invalido");
                }
                
                IR = salario_bruto * (valIR / 100.0);
                INSS = salario_bruto * (10 / 100.0);
                FGTS = salario_bruto * (11 / 100.0);
                total_de_desconto = IR + INSS;
                salario_liquido = salario_bruto - total_de_desconto;
                
                printf("com os descontos do IR R$%.2f\n", IR); 
                printf("com os descontos do INSS R$%.2f\n", INSS);
                printf("com os descontos do FGTS R$%.2f\n", FGTS);
                printf("o total de descontos foi de R$%.2f\n", total_de_desconto);
                printf("o salario liquido e R$%.2f\n", salario_liquido);
    


}