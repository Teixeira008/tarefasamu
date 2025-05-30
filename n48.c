/* Faça um programa que leia e valide as seguintes informações: Nome: maior que 3 caracteres; Idade: entre 0 e 150; Salário: maior que zero; Sexo: 'f' ou 'm'; Estado Civil: 's', 'c', 'v', 'd';*/

#include <stdio.h>
#include <stdarg.h>

int main(){
    char nome[20];
    char estado_civil; 
    char sexo;
    float idade;

    do {
        printf("Digite seu nome (mais de 3 caracteres): ");
        scanf("%s", nome);
    } while (strlen(nome) <= 3);

    printf("digite sua idade (limite 150)");
    scanf("%f", &idade);

    while (idade < 0 || idade > 150)
    {
        printf("idade invalida, digite novamente:\n");
        scanf("%f", &idade);
    }
    
    do{
        printf("digite seu estado civil (s, c, v, d):");
        scanf(" %c", &estado_civil);
    } while (estado_civil != 's' && estado_civil != 'c' && estado_civil != 'v' && estado_civil != 'd');
    {

    }
    
    do {
        printf("digite seu sexo (f ou m): ");
        scanf(" %c", &sexo);
        } while (sexo != 'f' && sexo != 'm');
    
    
    printf("validando seu cadastro\n");
    printf("nome: %s\n", nome);
    printf("idade: %.2f\n", idade);
    printf("estado civil: %c\n", estado_civil);
    printf("sexo: %c\n", sexo);
}