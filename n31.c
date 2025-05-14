#include <stdio.h>
int main() {
    
    char *dias[] = {
        "Segunda-feira",
        "Terca-feira",
        "Quarta-feira",
        "Quinta-feira",
        "Sexta-feira",
        "Sabado",
        "Domingo"
    };

    int numero;

    printf("Digite um número de 1 a 7 correspondente ao dia da semana:\n");
    scanf("%d", &numero);

    if (numero >= 1 && numero <= 7) {
        
        printf("Dia da semana: %s\n", dias[numero - 1]);
    } else {
        printf("Dia inválido!\n");
    }

    return 0;
}
