#include <stdio.h>

#define MAX_ALUNOS 20
#define MAX_UCS 10

typedef struct uc {
    char nomeUC[15];
    float notaUC;
} UC;

typedef struct aluno {
    char nome[50];
    UC cadeiras[MAX_UCS];
    float mediaUCs;
} Aluno;

// Função para calcular a média das notas de cada aluno
void notaMediaAlunos(Aluno *turma, int n) {
    for (int i = 0; i < n; i++) {
        float somaNotas = 0.0;

        // Calcular a soma das notas de todas as UCs para o aluno atual
        for (int j = 0; j < MAX_UCS; j++) {
            somaNotas += turma[i].cadeiras[j].notaUC;
        }

        // Calcular a média das notas para o aluno atual
        turma[i].mediaUCs = somaNotas / MAX_UCS;
    }
}

int main() {
    int numAlunos;

    // Obter o número de alunos do utilizador
    printf("Digite o número de alunos na turma: ");
    scanf("%d", &numAlunos);

    // Verificar se o número de alunos fornecido é válido
    if (numAlunos <= 0 || numAlunos > MAX_ALUNOS) {
        printf("Número inválido de alunos. Por favor, forneça um valor entre 1 e %d.\n", MAX_ALUNOS);
        return 1; // Código de erro
    }

    // Criar o vetor turma com um número de alunos definido pelo utilizador
    Aluno turma[MAX_ALUNOS];

    // Preencher as informações dos alunos (nome, notas, etc.)

    // Calcular a média das notas para cada aluno
    notaMediaAlunos(turma, numAlunos);

    // Agora você pode usar a turma com as médias das notas calculadas

    return 0;
}
