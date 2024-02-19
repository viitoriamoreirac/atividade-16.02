#include <stdio.h>

int main() {
    int numeros[10];

    for (int i = 0; i < 10; i++) {
        printf("Digite o valor para a posição %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    float media = 0;
    int quantidadePares = 0, quantidadeImpares = 0;

    for (int i = 0; i < 10; i++) {
        media += numeros[i];

        if (numeros[i] % 2 == 0) {
            quantidadePares++;
        } else {
            quantidadeImpares++;
        }
    }

    media /= 10;

    printf("Média dos valores digitados: %.2f\n", media);
    printf("Quantidade de números pares: %d\n", quantidadePares);
    printf("Quantidade de números ímpares: %d\n", quantidadeImpares);
}
