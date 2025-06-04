//Faça um Programa que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário.

int main(){
    int area, resul1, resul2;
    printf("Digite o valor da area:\n");
    scanf("%d", &area);

    resul1 = pow(area, 2);

    resul2 = resul1 * 2;
    printf("o dobro do quadrado e %d\n", resul2);


}
