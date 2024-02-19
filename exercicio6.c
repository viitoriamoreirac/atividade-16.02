#include <stdio.h>
#include <string.h>

struct aluno {
    char nome[81];
    char matricula[8];
    char turma;
    float n1, n2, n3;
};

typedef struct aluno Aluno;

void lerAlunos(Aluno alunos[], int quantidade) {
    for (int i = 0; i < quantidade; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", alunos[i].nome);
        printf("Matrícula: ");
        scanf("%s", alunos[i].matricula);
        printf("Turma: ");
        scanf(" %c", &alunos[i].turma);
        printf("Nota 1: ");
        scanf("%f", &alunos[i].n1);
        printf("Nota 2: ");
        scanf("%f", &alunos[i].n2);
        printf("Nota 3: ");
        scanf("%f", &alunos[i].n3);
    }
}

void atualizarAluno(Aluno alunos[], int quantidade, const char matricula[]) {
    for (int i = 0; i < quantidade; i++) {
        if (strcmp(alunos[i].matricula, matricula) == 0) {
            printf("Novo nome: ");
            scanf("%s", alunos[i].nome);
            printf("Nova turma: ");
            scanf(" %c", &alunos[i].turma);
            printf("Nova nota 1: ");
            scanf("%f", &alunos[i].n1);
            printf("Nova nota 2: ");
            scanf("%f", &alunos[i].n2);
            printf("Nova nota 3: ");
            scanf("%f", &alunos[i].n3);
            return;
        }
    }
    printf("Aluno com matrícula %s não encontrado.\n", matricula);
}

void excluirAluno(Aluno alunos[], int *quantidade, const char matricula[]) {
    for (int i = 0; i < *quantidade; i++) {
        if (strcmp(alunos[i].matricula, matricula) == 0) {
            alunos[i] = alunos[*quantidade - 1];
            (*quantidade)--;
            printf("Aluno com matrícula %s excluído com sucesso.\n", matricula);
            return;
        }
    }
    printf("Aluno com matrícula %s não encontrado.\n", matricula);
}

void imprimirAprovados(Aluno alunos[], int quantidade) {
    printf("Alunos Aprovados:\n");
    for (int i = 0; i < quantidade; i++) {
        float media = (alunos[i].n1 + alunos[i].n2 + alunos[i].n3) / 3;
        if (media >= 6.0) {
            printf("Nome: %s\n", alunos[i].nome);
            printf("Matrícula: %s\n", alunos[i].matricula);
            printf("Média: %.2f\n", media);
            printf("-----\n");
        }
    }
}

void imprimirReprovados(Aluno alunos[], int quantidade) {
    printf("Alunos Reprovados:\n");
    for (int i = 0; i < quantidade; i++) {
        float media = (alunos[i].n1 + alunos[i].n2 + alunos[i].n3) / 3;
        if (media < 6.0) {
            printf("Nome: %s\n", alunos[i].nome);
            printf("Matrícula: %s\n", alunos[i].matricula);
            printf("Média: %.2f\n", media);
            printf("-----\n");
        }
    }
}

int main() {
    const int MAX_ALUNOS = 100;
    Aluno alunos[MAX_ALUNOS];
    int quantidadeAlunos = 0;
    int opcao;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Ler Alunos\n");
        printf("2. Atualizar Aluno\n");
        printf("3. Excluir Aluno\n");
        printf("4. Imprimir Aprovados\n");
        printf("5. Imprimir Reprovados\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                lerAlunos(alunos, 3);
                break;
            case 2: {
                char matricula[8];
                printf("Digite a matrícula do aluno a ser atualizado: ");
                scanf("%s", matricula);
                atualizarAluno(alunos, quantidadeAlunos, matricula);
                break;
            }
            case 3: {
                char matricula[8];
                printf("Digite a matrícula do aluno a ser excluído: ");
                scanf("%s", matricula);
                excluirAluno(alunos, &quantidadeAlunos, matricula);
                break;
            }
            case 4:
                imprimirAprovados(alunos, quantidadeAlunos);
                break;
            case 5:
                imprimirReprovados(alunos, quantidadeAlunos);
                break;
            case 0:
                printf("Saindo do programa.\n");
                return 0;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    }

    return 0;
}
