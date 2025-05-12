#include <stdio.h>
#include <math.h>
 
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

}
int main(){
    int numero;
    printf("Digite um numero decimal:\n");
    scanf("%d", &numero);
    printf("Binario: ");
    decimalpBinario(numero);
    return 0; 
}