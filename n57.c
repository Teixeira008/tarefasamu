#include <stdio.h>
#include <math.h>

int main(){
    float tabuada;
    printf("digite qual tabuada vc deseja saber:\n");
    scanf("%f", &tabuada);
    for( int i = 1; i < 10; i++){
        printf("%f x %d = %f\n", tabuada, i, tabuada * i);
    }
    return 0;
}