#include <stdio.h>

int main()
{
    float arquivo, velocidade, tempo;

    printf("Digite o tamanho do arquivo em bits: ");
    scanf("%f", &arquivo);

    printf("Digite a velocidade da conexao em bits/segundo: ");
    scanf("%f", &velocidade);

    tempo = arquivo / velocidade;

    printf("O tempo necessario para concluir o download do arquivo eh de: %4.2f segundos\n", tempo);

    return 0;
}