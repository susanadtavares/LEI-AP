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

// Função para escrever no arquivo as informações dos alunos de uma determinada UC
void infoUC(Aluno *turma, int n, char *nome, FILE *f) {
    // Percorrer os alunos e procurar pela UC com o nome fornecido
    for (int i = 0; i < n; i++) {
        // Percorrer as UCs do aluno
        for (int j = 0; j < MAX_UCS; j++) {
            // Verificar se o nome da UC coincide
            if (strcmp(turma[i].cadeiras[j].nomeUC, nome) == 0) {
                // Escrever no arquivo as informações do aluno e da UC
                fprintf(f, "Aluno: %s\n", turma[i].nome);
                fprintf(f, "UC: %s\n", nome);
                fprintf(f, "Nota: %.2f\n", turma[i].cadeiras[j].notaUC);
                fprintf(f, "\n");
            }
        }
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

    // Abrir o arquivo para escrita
    FILE *arquivo = fopen("informacoes_uc.txt", "w");

    // Verificar se o arquivo foi aberto com sucesso
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1; // Código de erro
    }

    // Chamar a função para escrever no arquivo as informações dos alunos de uma UC
    infoUC(turma, numAlunos, "Nome_UC_Desejada", arquivo);

    // Fechar o arquivo
    fclose(arquivo);

    return 0;
}
