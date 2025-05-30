//Faça um Programa que peça uma data no formato dd/mm/aaaa e determine se a mesma é uma data válida.

#include <stdio.h>

int main(){
    int ano, mes, dia;

    printf("digite a data (dd/mm/aaaa):\n");
    scanf("%d/%d/%d", &dia, &mes, &ano);


    if( dia < 0 || dia < 32 || dia <31 || dia < 29 ){
        printf("Dias validos\n");
    } else {
        printf("Dias invalidos\n");
    }
    
    if( mes == 1 || mes == 2 || mes == 3 || mes == 4 || mes == 5 || mes == 6 || mes == 7 || mes == 8 || mes == 9 || mes == 10 || mes == 11 || mes == 12){
        printf("mes valido\n");
    } else if ( mes < 1 || mes > 12 ){ 
        printf("mes invalido\n");
        }
    
    if( ano % 4 == 0){
        printf("Ano bissexto\n");
    } else {
        printf("Ano normal\n");
        }
}