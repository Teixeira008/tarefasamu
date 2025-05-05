#include <math.h>
#include <stdio.h>

int main() {
    float tamanho_arquivo_MB, velocidade_Mbps, tempo_segundos, tempo_minutos;


    printf("Digite o tamanho do arquivo para download (em MB): ");
    scanf("%f", &tamanho_arquivo_MB);

  
    printf("Digite a velocidade do link de Internet (em Mbps): ");
    scanf("%f", &velocidade_Mbps);

    float tamanho_arquivo_Mbps = tamanho_arquivo_MB * 8;

    tempo_segundos = tamanho_arquivo_Mbps / velocidade_Mbps;

    
    tempo_minutos = tempo_segundos / 60;

    printf("O tempo aproximado de download é: %.2f minutos.\n", tempo_minutos);

    return 0;
}