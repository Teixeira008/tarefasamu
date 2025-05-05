#include <math.h>

int main() {
    int a, b;

    printf("digite um numero\n");
    scanf("%d", &a);

    printf("digite um numero\n");
    scanf("%d", &b);

    if(a==b){
        printf("sao iguais\n");
    }else if(a>b){
        printf("%d e maior\n", a);
    }else if(a<b){
        printf("%d e maior\n", b);
    }else{
        printf("não é igual\n");
    }
}