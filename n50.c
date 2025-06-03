//Altere o programa anterior permitindo ao usuário informar as populações e as taxas de crescimento iniciais. Valide a entrada e permita repetir a operação.
#include <stdio.h>
#include <math.h>


int main() {
    float popA, popB, taxa1, taxa2;
    int tempo = 0;

    while (1){ 
        printf("informe a populacao de A:\n");
        scanf("%f", &popA);
        printf("informe a populacao de B:\n");
        scanf("%f", &popB);
        printf("informe a taxa de crescimento de A:\n");
        scanf("%f", &taxa1);
        printf("informe a taxa de crescimento de B:\n");
        scanf("%f", &taxa2);
        
        tempo++;
        popA *= (taxa1 / 100);
        popB *= (taxa2 / 100);

        if(popA >= popB) {
        printf("Demorou %d anos para a populacao de A passar ou ser igual a de B.\n", tempo);
        printf("a possui %f habitantes e b tem %f habitantes.\n", popA, popB);
        break;
        }
        
    }
    return 0;

}

