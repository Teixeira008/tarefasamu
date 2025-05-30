 /** Faça um Programa que leia um número inteiro maior que 0 e menor que 1000 e imprima a quantidade de centenas, dezenas e unidades do mesmo.

Observando os termos no plural a colocação do "e", da vírgula entre outros.

Exemplo: 326 = 3 centenas, 2 dezenas e 6 unidades 12 = 1 dezena e 2 unidades

Testar com: 326, 300, 100, 320, 310,305, 301, 101, 311, 111, 25, 20, 10, 21, 11, 1, 7 e 16 **/

#include <stdio.h>

int main(){
    int dezena, centena, unidade, numero;
    

    printf("Digite um numero entre 1 e 999\n");
    scanf("%d", &numero);

    unidade = numero % 10;
    dezena = (numero % 100) / 10;
    centena = numero / 100;

    if(numero == centena || numero == dezena || numero == unidade){
        printf("%d centena, %d dezena e %d unidade", centena, dezena, unidade);
    } else if ( numero == dezena || numero == centena){
        printf("%d dezena e %d unidade", dezena, unidade);
    } else if (numero == unidade) {
        printf("%d unidade", unidade);
    } else {
        printf("errooooooooooooooooooooooooooooooooooooo");
    }
    
        
}