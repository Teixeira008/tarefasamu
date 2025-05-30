/*
Uma fruteira está vendendo frutas com a seguinte tabela de preços:

                      Até 5 Kg           Acima de 5 Kg
Morango         R$ 2,50 por Kg          R$ 2,20 por Kg
Maçã            R$ 1,80 por Kg          R$ 1,50 por Kg

Se o cliente comprar mais de 8 Kg em frutas ou o valor total da compra
ultrapassar R$ 25,00, receberá ainda um desconto de 10% sobre este total.

Escreva um algoritmo para ler a quantidade (em Kg) de morangos e a quantidade
(em Kg) de maças adquiridas e escreva o valor a ser pago pelo cliente.
*/

#include <stdio.h>
#include <math.h>

int main(){
    float  morango, maca, preco1, preco2, valorF;

    printf("digite quantos kg de morangos vc comprou;\n");
    scanf("%f", &morango);
    printf("digite quantos kg de maca vc comprou:\n");
    getchar();
    scanf("%f", &maca);


    if(morango > 5){
        preco1 = morango * 2.2;
        printf("o valor total do morango e: R$%.2f\n", preco1);
    } else {
        preco1 = morango * 2.5;
        printf("o valor total do morango e: R$%.2f\n", preco1);

    }
    if(maca > 5 ){
        preco2 = maca * 1.5;
        printf("o valor total da maca e: R$%.2f\n", preco2);
    } else {
        preco2 = maca * 1.8;
        printf("o valor total da maca e: R$%.2f\n", preco2);
    }  
    valorF = preco1 + preco2;
    if((morango + maca) > 8 || valorF > 25 ){
        valorF -= valorF * 10 / 100;


        printf("o valor que deve ser pago e R$%.2f", valorF);
    }



}