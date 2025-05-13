#include <stdio.h>
#include <math.h>
#include <string.h>

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

}
int main(){
    char bin[16];

    printf("digite um numero binario: \n");
    scanf("%s", bin);

    printf("Octal:\n");
    binariopOctal(bin);

    return 0;
}
