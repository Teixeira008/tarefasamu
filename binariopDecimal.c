#include <stdio.h>
#include <math.h>
#include <string.h>


int Binariopdecimal (char bin[]){
  int decimal = 0;
    int tamanho = strlen(bin);

    for (int i = 0; i < tamanho; i++) {
        if (bin[i] == '1') {
            decimal += pow(2, tamanho - 1 - i);
        }
    }

    return decimal;
}

int main(){
    char binario[16];
    printf("Digite um número binário: ");
    scanf("%s", binario);
    int resultado = Binariopdecimal(binario);
    printf("Decimal: %d\n", resultado);
    return 0;
}   
