#include <stdio.h>

int main(){
int a;

printf("digite um valor: \n");
scanf("%d", &a);

if(a<0){
 printf("o valor é negativo");
} else if(a>0){
    printf("o valor é positivo");
}

}