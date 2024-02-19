#include <stdio.h>

int main() {
    float peso, altura;

    printf("Digite seu peso: (Apenas numerais) ");
    scanf("%f", &peso);

    printf("Digite sua altura em metros: (Apenas numerais) ");
    scanf("%f", &altura);

    float imc = peso / (altura * altura);

    printf("Seu IMC é de %2.f\n", imc);

    if (imc < 20) {
        printf("Você está abaixo do peso!\n");
    } else if (imc >= 20 && imc < 25) {
        printf("Você está com o peso normal.\n");
    } else if (imc >= 25 && imc < 30) {
        printf("Você está com sobrepeso!\n");
    } else if (imc >= 30 && imc < 40) {
        printf("Você está obeso!\n");
    } else {
        printf("Você está com obesidade mórbida, procure um médico!\n");
    }
}