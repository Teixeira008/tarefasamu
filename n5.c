// Faça um Programa que converta metros para centímetros.

#include <stdio.h>
#include <math.h>

int slk(){
    int mt, dvz;

    printf("Coloque os metros: \n");
    scanf("%d", &mt);

    dvz = mt * 100;
    return dvz;
}

int tmj(){

    int cm, mult;

    printf("coloque os cm: \n");
    scanf("%d", &cm);
    
    mult = cm / 100.0;
    return mult; 
}

int main(){
    int n;  

    printf(" se vc quer converter metros em cm coloque 1, se voce quer converter cm em metros coloque 2\n");
    scanf("%d", &n);

    if(n == 1){
        int reusltado = slk();
        printf("metros em cm fica %d\n", reusltado);
    } else if (n == 2){
        int resultado = tmj();
        printf("cm em metros fica %d\n", resultado);
    } else {
        printf("opcao invalida\n");
    }


    return 0;   
}