#include <stdio.h>
#include <math.h>

int main(){
    int num1, num2;
    printf("digite um numero inteiro:\n");
    scanf("%d", &num1);
    printf("digite outro numero inteiro:\n");
    getchar();
    scanf("%d", &num2);

    for(int i = num1; i < num2; i++){
        printf("%d ", i);
    }
    return 0;

}
