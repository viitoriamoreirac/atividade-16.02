#include <stdio.h>

int main() {

    int quantidadeFilhos, contadorTotalPessoas, quantidadePessoas4FilhosOuMais, totalFilhos;
    float salario, totalSalarios;

    printf("Qual seu salário? (Digite um salário negativo para encerrar) ");
    scanf("%f", &salario);
    float maiorSalario, menorSalario = salario;


    while (salario >= 0) {

        printf("\nQuantos filhos você tem? ");
        scanf("%d", &quantidadeFilhos);
        
        if (salario > maiorSalario) {
            maiorSalario = salario;
        } else if (salario < menorSalario) {
            menorSalario = salario;
        }
        if (quantidadeFilhos > 4){
            quantidadePessoas4FilhosOuMais++;
        }
        totalSalarios = totalSalarios + salario;
        totalFilhos = totalFilhos + quantidadeFilhos;
        contadorTotalPessoas++;

        // reiniando a leitura
        printf("\nQual seu salário? (Digite um salário negativo para encerrar) ");
        scanf("%f", &salario);
    }

    float mediaFilhos = totalFilhos / contadorTotalPessoas;

    printf("O número de pessoas com mais de 4 filhos é de: %d\n", quantidadePessoas4FilhosOuMais);
    printf("A média de filhos entre a população é de: %.2f\n", mediaFilhos);
    printf("O maior salário é de: R$ %.2f\n", maiorSalario);
    printf("O menor salário é de R$ %.2f\n", menorSalario);
}