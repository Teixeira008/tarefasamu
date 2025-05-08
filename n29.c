#include <stdio.h>
#include <math.h>


int main(){
    float salario_sem_reajuste;
    int pda; //((Valor Final - Valor Inicial) / Valor Inicial) * 100
    int salario_com_reajuste;
    int result;
    int vda;

    printf("digite o valor do seu salario:");
    scanf("%f", &salario_sem_reajuste);

    if(salario_sem_reajuste <= 280){
        result = salario_sem_reajuste * 0,020;
        salario_com_reajuste = result + salario_sem_reajuste;
        pda = ((salario_com_reajuste - salario_sem_reajuste) / salario_sem_reajuste) * 100;
        vda = salario_com_reajuste - salario_sem_reajuste;
        printf("o valor do seu salario sem reajuste e: %f\n", salario_sem_reajuste);
        printf("o percentual de aumento foi de: %d\n", &pda);
        printf("o valor de aumento foi de: %d\n", &vda);
        printf("o valor do seu salario com reajuste foi de:%d", &salario_com_reajuste);
    } else if(salario_sem_reajuste >= 280 && salario_sem_reajuste <= 700){
        result = salario_sem_reajuste * 0,015;
        salario_com_reajuste = result + salario_sem_reajuste;
        pda = ((salario_com_reajuste - salario_sem_reajuste) / salario_sem_reajuste) * 100;
        vda = salario_com_reajuste - salario_sem_reajuste;
        printf("o valor do seu salario sem reajuste e: %f\n", salario_sem_reajuste);
        printf("o percentual de aumento foi de: %d\n", &pda);
        printf("o valor de aumento foi de: %d\n", &vda);
        printf("o valor do seu salario com reajuste foi de:%d", &salario_com_reajuste);
        } else if(salario_sem_reajuste >= 700 && salario_sem_reajuste <= 1500){
            result = salario_sem_reajuste * 0,010;
            salario_com_reajuste = result + salario_sem_reajuste;
            pda = ((salario_com_reajuste - salario_sem_reajuste) / salario_sem_reajuste) * 100;
            vda = salario_com_reajuste - salario_sem_reajuste;
            printf("o valor do seu salario sem reajuste e: %f\n", salario_sem_reajuste);
            printf("o percentual de aumento foi de: %d\n", &pda);
            printf("o valor de aumento foi de: %d\n", &vda);
            printf("o valor do seu salario com reajuste foi de:%d", &salario_com_reajuste);
            printf("o valor do seu salario com reajuste e: %d\n", salario_com_reajuste);
            } else if(salario_sem_reajuste >= 1500){
                result = salario_sem_reajuste * 0,005;
                salario_com_reajuste = result + salario_sem_reajuste;
                pda = ((salario_com_reajuste - salario_sem_reajuste) / salario_sem_reajuste) * 100;
                vda = salario_com_reajuste - salario_sem_reajuste;
                printf("o valor do seu salario sem reajuste e: %f\n", salario_sem_reajuste);
                printf("o percentual de aumento foi de: %d\n", &pda);
                printf("o valor de aumento foi de: %d\n", &vda);
                printf("o valor do seu salario com reajuste foi de:%d", &salario_com_reajuste);
        } else {
            printf("salario invalido");
        }
}