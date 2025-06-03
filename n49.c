/*
Supondo que a população de um país A seja da ordem de 80000 habitantes com uma
taxa anual de crescimento de 3% e que a população de B seja 200000 habitantes
com uma taxa de crescimento de 1.5%.

Faça um programa que calcule e escreva o número de anos necessários para que a
população do país A ultrapasse ou iguale a população do país B, mantidas as
taxas de crescimento.
*/

#include <stdio.h>
#include <math.h>


int main() {
    float popA = 80.000, popB = 200.000;
    int tempo = 0;

    while (1){ 
        tempo++;
        popA *= (3 / 100);
        popB *= (1.5 / 100);

        if(popA >= popB) {
        printf("Demorou %d anos para a populacao de A passar ou ser igual a de B.\n", tempo);
        printf("a possui %f habitantes e b tem %f habitantes.\n", popA, popB);
        break;
        }
        
    }
    return 0;

}

