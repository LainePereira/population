#include <stdio.h>

int main(void)
{
    int valor_inicial, valor_final;

    // Solicite o valor inicial ao usuário
    printf("Digite o valor inicial: ");
    scanf("%d", &valor_inicial);

    // Solicite o valor final ao usuário
    printf("Digite o valor final: ");
    scanf("%d", &valor_final);

    // Calcule o número de anos até o limite
    int anos = 0;
    int saldo = valor_inicial;

    while (saldo < valor_final)
    {
        anos++;
        saldo += saldo * 0.03; // Supondo um crescimento de 3% ao ano
    }

    // Imprima o número de anos
    printf("Levará %d anos para atingir ou ultrapassar o valor final.\n", anos);

    return 0;
}
