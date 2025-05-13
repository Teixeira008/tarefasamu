#include <stdio.h>

void decimalParaHexadecimal(int decimal) {
    char hexa[20]; 
    int i = 0;

    if (decimal == 0) {
        printf("0");
        return;
    }

    while (decimal != 0) {
        int resto = decimal % 16;

        if (resto < 10)
            hexa[i] = resto + '0';  
        else
            hexa[i] = resto - 10 + 'A';  

        decimal = decimal / 16;
        i++;
    }

    
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hexa[j]);
    }
}

int main() {
    int decimal;

    printf("Digite um numero decimal: ");
    scanf("%d", &decimal);

    printf("Hexadecimal: ");
    decimalParaHexadecimal(decimal);
    printf("\n");

    return 0;
}
