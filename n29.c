#include <stdio.h>
#include <math.h>


#include <stdio.h>

int main() {
    float salario_sem_reajuste;
    float pda, salario_com_reajuste, result, vda;

    printf("Digite o valor do seu salário: ");
    scanf("%f", &salario_sem_reajuste);

    if (salario_sem_reajuste <= 280) {
        result = salario_sem_reajuste * 0.20;
    } else if (salario_sem_reajuste <= 700) {
        result = salario_sem_reajuste * 0.15;
    } else if (salario_sem_reajuste <= 1500) {
        result = salario_sem_reajuste * 0.10;
    } else {
        result = salario_sem_reajuste * 0.05;
    }

    salario_com_reajuste = salario_sem_reajuste + result;
    vda = result;
    pda = (vda / salario_sem_reajuste) * 100;

    printf("O valor do seu salário sem reajuste é: %.2f\n", salario_sem_reajuste);
    printf("O percentual de aumento foi de: %.2f%%\n", pda);
    printf("O valor de aumento foi de: %.2f\n", vda);
    printf("O valor do seu salário com reajuste é: %.2f\n", salario_com_reajuste);

    return 0;
}
