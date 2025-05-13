#include <stdio.h>
#include <math.h>
#include <string.h>

void binariopOctal(char bin[]){
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
}


int main(){
    char bin[16];

    printf("Digite um número binário: ");
    scanf("%s", bin);

    binariopOctal(bin);

    return 0;
}