#include <stdio.h>
#include <math.h>

int main()
{
    int nota1, nota2, nota3, nota4, dvz, soma;
    printf("Nota do primeiro trimestre:\n");
    scanf("%d", &nota1);
    
    printf("Nota do segundo trimestre:\n");
    scanf("%d", &nota2);
    
    printf("Nota do terceiro trimestre:\n");
    scanf("%d", &nota3);
    
    printf("Nota do quarto trimestre:\n");
    scanf("%d", &nota4);
    
    soma = nota1 + nota2 + nota3 + nota4;
   
    
    dvz = soma / 4;
    printf("Sua media final e %d \n", dvz);
    return 0;

}