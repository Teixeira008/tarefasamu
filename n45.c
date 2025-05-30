/*
O Hipermercado Tabajara está com uma promoção de carnes que é imperdível.
Confira:

                      Até 5 Kg           Acima de 5 Kg
File Duplo      R$ 4,90 por Kg          R$ 5,80 por Kg
Alcatra         R$ 5,90 por Kg          R$ 6,80 por Kg
Picanha         R$ 6,90 por Kg          R$ 7,80 por Kg

Para atender a todos os clientes, cada cliente poderá levar apenas um dos tipos
de carne da promoção, porém não há limites para a quantidade de carne
por cliente.

Se compra for feita no cartão Tabajara o cliente receberá ainda um desconto de
5% sobre o total da compra.

Escreva um programa que peça o tipo e a quantidade de carne comprada pelo
usuário e gere um cupom fiscal, contendo as informações da compra:
    tipo de carne
    quantidade de carne
    preço total
    tipo de pagamento
    valor do desconto
    valor a pagar.
*/

#include <stdio.h>
#include <math.h>

int main(){
    float  file_duplo, alcatra, picanha, preco1, preco2, preco3, valorFcom, formadePG;

    printf("digite a forma de pagamento, 1 para dinheiro, 2 para cartao tabajara, 3 cartao, 4 pix: ");
    scanf("%f", &formadePG);
    printf("digite quantos kg de file duplo vc comprou;\n");
    getchar();
    scanf("%f", &file_duplo);
    printf("digite quantos kg de alcatra vc comprou:\n");
    getchar();
    scanf("%f", &alcatra);
    printf("digite quantos kg de picanha vc comprou:\n");
    getchar();
    scanf("%f", &picanha);


    if(file_duplo > 5){
        preco1 = file_duplo * 5.8;
        printf("o valor total do file duplo e: R$%.2f\n", preco1);
    } else {
        preco1 = file_duplo * 4.9;
        printf("o valor total do file duplo e: R$%.2f\n", preco1);

    }

    if(picanha > 5 ){
        preco2 = alcatra * 6.8;
        printf("o valor total da alcatra e: R$%.2f\n", preco2);
    } else {
        preco2 = alcatra * 5.9;
        printf("o valor total da alcatra e: R$%.2f\n", preco2);
    } 

    if(picanha > 5 ){
        preco3 = picanha * 7.8;
        printf("o valor total da picanha e: R$%.2f\n", preco2);
    } else {
        preco3 = picanha * 6.9;
        printf("o valor total da picanha e: R$%.2f\n", preco3);
    } 

    
    if( formadePG == 1 ){
        printf("quantidade (Kg): %.2fkg\n", file_duplo);
        printf("quantidade (Kg): %.2fkg\n", alcatra);
        printf("quantidade (Kg): %.2fkg\n", picanha);
        printf("o valor sera R$%.2f\n", preco1);
        printf("o valor sera R$%.2f\n", preco2);
        printf("o valor sera R$%.2f\n", preco3);
        } else if(formadePG == 2){
            printf("quantidade (Kg): %.2fkg\n", file_duplo);
            printf("quantidade (Kg): %.2fkg\n", alcatra);
            printf("quantidade (Kg): %.2fkg\n", picanha);

            printf(" o valor do desconto e de 5%%\n");

            valorFcom = preco1 * 5 / 100;
            valorFcom = preco2 * 5 / 100;
            valorFcom = preco3 * 5 / 100;

            printf("o valor sera R$%.2f\n", valorFcom);
            printf("o valor sera R$%.2f\n", valorFcom);
            printf("o valor sera R$%.2f\n", valorFcom);

        } else if(formadePG == 3){
            printf("quantidade (Kg): %.2fkg\n", file_duplo);
            printf("quantidade (Kg): %.2fkg\n", alcatra);
            printf("quantidade (Kg): %.2fkg\n", picanha);

            printf("o valor sera R$%.2f\n", preco1);
            printf("o valor sera R$%.2f\n", preco2);
            printf("o valor sera R$%.2f\n", preco3);
        } else { 
            printf("quantidade (Kg): %.2fkg\n", file_duplo);
            printf("quantidade (Kg): %.2fkg\n", alcatra);
            printf("quantidade (Kg): %.2fkg\n", picanha);

            printf("o valor sera R$%.2f\n", preco1);
            printf("o valor sera R$%.2f\n", preco2);
            printf("o valor sera R$%.2f\n", preco3);
        }


        
    



}