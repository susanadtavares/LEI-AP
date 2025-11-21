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

    // Agora você pode usar o vetor turma normalmente

    return 0;
}
