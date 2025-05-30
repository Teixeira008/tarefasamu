/** Um posto está vendendo combustíveis com a seguinte tabela de descontos: Álcool: até 20 litros, desconto de 3% por litro acima de 20 litros, desconto de 5% por litro Gasolina: até 20 litros, desconto de 4% por litro acima de 20 litros, desconto de 6% por litro

Escreva um algoritmo que leia o número de litros vendidos, o tipo de combustível (codificado da seguinte forma: A-álcool, G-gasolina), calcule e imprima o valor a ser pago pelo cliente sabendo-se que o preço do litro da gasolina é R$ 2,50 o preço do litro do álcool é R$ 1,90. **/




#include <stdio.h>
#include <math.h>

int main() {
    float litro, preco;
    char tipo;

    printf("Digite quantos litros deseja colocar:\n");
    scanf("%f", &litro);

    getchar(); 

    printf("A - aucu ou G - Gasolina:\n");
    scanf("%c", &tipo);

    if (tipo == 'A' || tipo == 'a') {
        preco = litro * 1.90;
        if (litro <= 20) {
            preco -= 1.90 * litro * 3 / 100.0;
        } else {
            preco -= 1.90 * litro * 5 / 100.0;
        }
    } else if (tipo == 'G' || tipo == 'g') {
        preco = litro * 2.50;
        if (litro <= 20) {
            preco -= 2.50 * litro * 4 / 100.0;
        } else {
            preco -= 2.50 * litro * 6 / 100.0;
        }
    } else {
        printf("erroo\n");
        
    }

    printf("O valor é de R$ %.2f\n", preco);
    return 0;
}
