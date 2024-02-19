#include <stdio.h>

int main() {
    
    float horasTrabalhadas, salarioMinimo, qtdHorasExtras;

    printf("Qual a quantidade de horas trabalhadas? ");
    scanf("%f", &horasTrabalhadas);

    printf("Qual o valor do salário mínimo? ");
    scanf("%f", &salarioMinimo);

    printf("Quantas horas extras foram feitas? ");
    scanf("%f", &qtdHorasExtras);

    float salarioAReceber = horasTrabalhadas * (salarioMinimo / 8) + qtdHorasExtras * (salarioMinimo / 4);

    printf("O valor total a ser recebido é de R$ %.2f\n", salarioAReceber);
}