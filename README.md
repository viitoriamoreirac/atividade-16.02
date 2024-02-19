# Atividade em C para revisão de sintaxe e lógica

## Atividade feita para a matéria de Estrutura de Dados, solicitada pela professora Cledja.

[#1] 1. Faça um programa que declare e inicialize variáveis para guardar: a quantidade de horas
trabalhadas, o valor do salário-mínimo e a quantidade de horas extras trabalhadas. Calcule e mostre
o salário a receber, de acordo com a seguinte fórmula:
salario_a_receber = quantidade de horas trabalhas * valor da hora trabalhada + quantidade de
horas_extras * valor da hora extra.
Sabendo que:
• A hora trabalhada vale 1/8 do salário-mínimo;
• A hora extra vale 1⁄4 do salário-mínimo <br>
[#2] Faça um programa para exibir a situação do peso de uma pessoa. Essa situação é determinada através do IMC (Índice de Massa Corpórea). <br>
[#3] Adapte o código anterior, de modo a fazer a leitura de um número indeterminado de alunos. <br>
[#4] A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário
e número de filhos. A prefeitura deseja saber:
• O número de pessoas com mais de 4 filhos
• Média do número de filhos;
• Maior salário;
• Menor salário;
O final da leitura de dados se dará com a entrada de um salário negativo.<br>
[#5] Fazer um programa que declare e inicialize um vetor de 10 posições para guardar números inteiros.
Calcule e mostre: a média dos valores digitados, a quantidade de números pares, a quantidade de
números ímpares. <br>
[#6] Considerando as declarações:
struct aluno {
char nome[81];
char matricula[8];
char turma;
float n1;

float n2;
float n3;
};
typedef struct aluno Aluno;
Para representar o cadastro de alunos de uma disciplina, implemente funções para:

• Fazer a leitura dos dados de vários alunos.
• Fazer a atualização dos dados de um aluno, dado sua matrícula
• Fazer a exclusão de um aluno, dado sua matrícula
• Imprimir os alunos aprovados
• Imprimir os alunos reprovados
