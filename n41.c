#include <stdio.h>
#include <math.h>

int main() {
    float num;
    int opcao;

    printf("Digite um número: ");
    scanf("%f", &num);

    printf("O que você deseja verificar?\n");
    printf("1 - Par ou Ímpar\n");
    printf("2 - Positivo ou Negativo\n");
    printf("3 - Inteiro ou Decimal\n");
    printf("Escolha uma opção (1, 2 ou 3): ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            if (floor(num) != num) {
                printf("O número não é inteiro, não pode ser classificado como par ou ímpar.\n");
            } else if ((int)num % 2 == 0) {
                printf("O número é par.\n");
            } else {
                printf("O número é ímpar.\n");
            }
            break;

        case 2:
            if (num > 0) {
                printf("O número é positivo.\n");
            } else if (num < 0) {
                printf("O número é negativo.\n");
            } else {
                printf("O número é zero (neutro).\n");
            }
            break;

        case 3:
            if (floor(num) == num) {
                printf("O número é inteiro.\n");
            } else {
                printf("O número é decimal.\n");
            }
            break;

        default:
            printf("Opção inválida!\n");
    }

    return 0;
}
