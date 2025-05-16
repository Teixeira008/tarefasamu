#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main() {
    char aproveitamento;
    float nota1, nota2, media;
    printf("digite uma nota do seu boletim");
    scanf("%f", &nota1);
    printf("digite outra nota do seu boletim");
    scanf("%f", &nota2);
    
    media = (nota1 + nota2) / 2;
    if(media >= 9.0 && media <= 10.0 ){
        aproveitamento = 'A';
    } else if ( media >= 7.5 && media < 9.0){
        aproveitamento = 'B';
    } else if (media >= 6.0 && media < 7.5){
         aproveitamento = 'C';
        } else if( media >= 4.0 && media < 6.0){
            aproveitamento = 'D';
        } else if (media >= 0.0 && media < 4.0){
            aproveitamento = 'E';
        }
       if (aproveitamento == 'D' || aproveitamento == 'E'){
        printf("REPROVADO\nAproveitamento: %c", aproveitamento);
       }else{
        printf("APROVADO\nAproveitamento: %c", aproveitamento);
    return 0;
    }

}
