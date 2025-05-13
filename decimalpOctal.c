#include <stdio.h>

void decimalParaOctal(int decimal) {
    if (decimal < 0 || decimal > 65535) {
        printf("Erro: o numero deve estar entre 0 e 65535 (16 bits).\n");
        return;
    }

    int octal[20]; 
    int i = 0;

    if (decimal == 0) {
        printf("Octal: 0\n");
        return;
    }

    while (decimal > 0) {
        octal[i] = decimal % 8;
        decimal /= 8;
        i++;
    }

    printf("Octal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
    printf("\n");
}

int main() {
    int decimal;

    printf("Digite um numero decimal (0 a 65535): ");
    scanf("%d", &decimal);

    decimalParaOctal(decimal);

    return 0;
}
