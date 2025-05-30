/** Faça um programa que leia um nome de usuário e a sua senha e não aceite a senha igual ao nome do usuário, mostrando uma mensagem de erro e voltando a pedir as informações. */

#include <stdio.h>

int main(){
    char nome[15], senha[15];

    printf("vamos criar um login, crio o seu nome:\n");
    scanf("%s", &nome);
    printf("crio a sua senha:\n");
    scanf("%s", &senha);
    
    while (!strcmp(nome, senha))
    {   
        printf("Nome de usuario nao pode ser igual a senha:\n");
        scanf("%s", &nome);
        printf("crie a sua senha:\n");
        scanf("%s", &senha);
    }
    return 0;
}