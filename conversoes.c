/**#include <stdio.h>
#include <math.h>
#include <string.h> 
#include <stdbool.h>

void decimalpBinario();
int Binariopdecimal();
void binariopOctal();
void decimalParaOctal();
void binariopHexa();
void decimalParaHexadecimal();
void ascii_de();

int main() {
    int n;
    bool parar = false;

    while (!parar) {
        printf("\n===== Calculadora Multibase =====\n");
        printf("0 - Parar o programa.\n");
        printf("1 - Decimal para binário\n");
        printf("2 - Binário para decimal\n");
        printf("3 - Binário para octal\n");
        printf("4 - Decimal para octal\n");
        printf("5 - Binário para hexadecimal\n");
        printf("6 - Decimal para hexadecimal\n");
        printf("7 - Texto para códigos ASCII decimais\n");
        printf("Escolha uma opção: ");
        scanf("%d", &n);
        getchar(); 

        switch (n) {
            case 0: parar = true; break;
            case 1: decimalpBinario(); break;
            case 2: Binariopdecimal(); break;
            case 3: binariopOctal(); break;
            case 4: decimalParaOctal(); break;
            case 5: binariopHexa(); break;
            case 6: decimalParaHexadecimal(); break;
            case 7: ascii_de(); break;
            default: printf("Opção inválida!\n");
        }
    }
}

int Binariopdecimal (char bin[]){
  int decimal = 0;
    int tamanho = strlen(bin);

    for (int i = 0; i < tamanho; i++) {
        if (bin[i] == '1') {
            decimal += pow(2, tamanho - 1 - i);
        }
    }

    return decimal;

    char binario[16];
    printf("Digite um número binário: ");
    scanf("%s", binario);

    int resultado = Binariopdecimal(binario);
    printf("Decimal: %d\n", resultado);

    return 0;
}
void decimalpBinario(int n){
    int binario[16], i = 0;
    if (n == 0){
        printf("0");
        return;
        }

    while (n > 0 )
    {
        binario[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--){
        printf("%d", binario[j]);
    }
        printf("\n");

    int numero;
    printf("Digite um numero decimal:\n");
    scanf("%d", &numero);
    printf("Binario: ");
    decimalpBinario(numero);
    return 0;

}
void binariopOctal(char bin[]){
    int len = strlen(bin);
    int resto = len % 3;
    char ajustado[16] = "";


    if(resto == 1){
        strcat(ajustado, "00");
        }
        else if(resto == 2){
            strcat(ajustado, "0");
    }
    strcat(ajustado, bin);
    int i = 0;
    while (ajustado[i] != '\0') {
        int valor = (ajustado[i] - '0') * 4 + 
                    (ajustado[i+1] - '0') * 2 + 
                    (ajustado[i+2] - '0') * 1;
        printf("%d", valor);
        i += 3;
    }

    printf("\n");

    char bin[16];

    printf("digite um numero binario: \n");
    scanf("%s", bin);

    printf("Octal:\n");
    binariopOctal(bin);

    return 0;

}
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

    int decimal;

    printf("Digite um numero decimal (0 a 65535): ");
    scanf("%d", &decimal);

    decimalParaOctal(decimal);

    return 0;
}
void binariopHexa(char bin[]){
    int len = strlen(bin);
    int resto = len % 4;
    char ajustado[16] = "";


    if(resto == 1){
        strcat(ajustado, "000");
        }
        else if(resto == 2){
            strcat(ajustado, "00");
    } else if (resto == 3){
         strcat(ajustado, "0");
    }
    strcat(ajustado, bin);


    printf("Hexadecimal:\n");
   for (int i = 0; ajustado[i] != '\0'; i+= 4) {
            int valor = (ajustado[i] - '0') * 8 + 
                        (ajustado[i+1] - '0') * 4 + 
                        (ajustado[i+2] - '0') * 2 +
                        (ajustado[i+3] - '0') * 1;
   
                    
       if(valor < 10){ 
        printf("%d", valor);}
        else{
            printf("%c", 'A' + (valor - 10));
        }
        printf("\n");
    }

    char bin[16];

    printf("Digite um número binário: ");
    scanf("%s", bin);

    binariopHexa(bin);

    return 0;
}
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
    int decimal;

    printf("Digite um numero decimal: ");
    scanf("%d", &decimal);

    printf("Hexadecimal: ");
    decimalParaHexadecimal(decimal);
    printf("\n");

    return 0;
}
void ascii_de() {
    char texto[500];

    printf("Digite uma palavra ou frase: ");
    fgets(texto, sizeof(texto), stdin);

    size_t len = strlen(texto);
    if (texto[len - 1] == '\n') {
        texto[len - 1] = '\0';
    }

    printf("Valores ASCII decimais:\n");
    for (int i = 0; texto[i] != '\0'; i++) {
        printf("'%c' = %d\n", texto[i], (int)texto[i]);
    }
} **/


#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

void decimalpBinario();
void Binariopdecimal();
void binariopOctal();
void decimalParaOctal();
void binariopHexa();
void decimalParaHexadecimal();
void ascii_de();

int main() {
    int n;
    bool parar = false;

    while (!parar) {
        printf("\n===== Calculadora Multibase =====\n");
        printf("0 - Parar o programa.\n");
        printf("1 - Decimal para bin\303\241rio\n");
        printf("2 - Bin\303\241rio para decimal\n");
        printf("3 - Bin\303\241rio para octal\n");
        printf("4 - Decimal para octal\n");
        printf("5 - Bin\303\241rio para hexadecimal\n");
        printf("6 - Decimal para hexadecimal\n");
        printf("7 - Texto para c\303\263digos ASCII decimais\n");
        printf("Escolha uma op\303\247\303\243o: ");
        scanf("%d", &n);
        getchar();

        switch (n) {
            case 0: parar = true; break;
            case 1: decimalpBinario(); break;
            case 2: Binariopdecimal(); break;
            case 3: binariopOctal(); break;
            case 4: decimalParaOctal(); break;
            case 5: binariopHexa(); break;
            case 6: decimalParaHexadecimal(); break;
            case 7: ascii_de(); break;
            default: printf("Op\303\247\303\243o inv\303\241lida!\n");
        }
    }

    return 0;
}

void decimalpBinario() {
    int n;
    printf("Digite um n\303\272mero decimal: ");
    scanf("%d", &n);

    int binario[16], i = 0;
    if (n == 0) {
        printf("Bin\303\241rio: 0\n");
        return;
    }

    while (n > 0) {
        binario[i++] = n % 2;
        n = n / 2;
    }

    printf("Bin\303\241rio: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
    printf("\n");
}

void Binariopdecimal() {
    char binario[16];
    printf("Digite um n\303\272mero bin\303\241rio: ");
    scanf("%s", binario);

    int decimal = 0;
    int tamanho = strlen(binario);

    for (int i = 0; i < tamanho; i++) {
        if (binario[i] == '1') {
            decimal += pow(2, tamanho - 1 - i);
        }
    }

    printf("Decimal: %d\n", decimal);
}

void binariopOctal() {
    char bin[16];
    printf("Digite um n\303\272mero bin\303\241rio: ");
    scanf("%s", bin);

    int len = strlen(bin);
    int resto = len % 3;
    char ajustado[32] = "";

    if (resto == 1) {
        strcat(ajustado, "00");
    } else if (resto == 2) {
        strcat(ajustado, "0");
    }
    strcat(ajustado, bin);

    int i = 0;
    printf("Octal: ");
    while (ajustado[i] != '\0') {
        int valor = (ajustado[i] - '0') * 4 +
                    (ajustado[i + 1] - '0') * 2 +
                    (ajustado[i + 2] - '0');
        printf("%d", valor);
        i += 3;
    }
    printf("\n");
}

void decimalParaOctal() {
    int decimal;
    printf("Digite um n\303\272mero decimal (0 a 65535): ");
    scanf("%d", &decimal);

    if (decimal < 0 || decimal > 65535) {
        printf("Erro: o n\303\272mero deve estar entre 0 e 65535 (16 bits).\n");
        return;
    }

    int octal[20];
    int i = 0;

    if (decimal == 0) {
        printf("Octal: 0\n");
        return;
    }

    while (decimal > 0) {
        octal[i++] = decimal % 8;
        decimal /= 8;
    }

    printf("Octal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
    printf("\n");
}

void binariopHexa() {
    char bin[16];
    printf("Digite um n\303\272mero bin\303\241rio: ");
    scanf("%s", bin);

    int len = strlen(bin);
    int resto = len % 4;
    char ajustado[32] = "";

    if (resto == 1) {
        strcat(ajustado, "000");
    } else if (resto == 2) {
        strcat(ajustado, "00");
    } else if (resto == 3) {
        strcat(ajustado, "0");
    }
    strcat(ajustado, bin);

    printf("Hexadecimal: ");
    for (int i = 0; ajustado[i] != '\0'; i += 4) {
        int valor = (ajustado[i] - '0') * 8 +
                    (ajustado[i + 1] - '0') * 4 +
                    (ajustado[i + 2] - '0') * 2 +
                    (ajustado[i + 3] - '0');

        if (valor < 10) {
            printf("%d", valor);
        } else {
            printf("%c", 'A' + (valor - 10));
        }
    }
    printf("\n");
}

void decimalParaHexadecimal() {
    int decimal;
    printf("Digite um n\303\272mero decimal: ");
    scanf("%d", &decimal);

    char hexa[20];
    int i = 0;

    if (decimal == 0) {
        printf("Hexadecimal: 0\n");
        return;
    }

    while (decimal != 0) {
        int resto = decimal % 16;

        if (resto < 10)
            hexa[i] = resto + '0';
        else
            hexa[i] = resto - 10 + 'A';

        decimal /= 16;
        i++;
    }

    printf("Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hexa[j]);
    }
    printf("\n");
}

void ascii_de() {
    char texto[500];

    printf("Digite uma palavra ou frase: ");
    fgets(texto, sizeof(texto), stdin);

    size_t len = strlen(texto);
    if (texto[len - 1] == '\n') {
        texto[len - 1] = '\0';
    }

    printf("Valores ASCII decimais:\n");
    for (int i = 0; texto[i] != '\0'; i++) {
        printf("'%c' = %d\n", texto[i], (int)texto[i]);
    }
}
