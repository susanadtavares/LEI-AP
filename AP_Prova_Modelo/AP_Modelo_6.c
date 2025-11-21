#include <stdio.h>

int PesqBin(int *vect, int indInf, int indSup, int chave) {
    int indMeio;
    if (indInf > indSup)
        return -1;
    else {
        indMeio = (indInf + indSup) / 2;
        if (chave < vect[indMeio])
            return PesqBin(vect, indInf, indMeio - 1, chave);
        else if (vect[indMeio] == chave)
            return indMeio;
        else
            return PesqBin(vect, indMeio + 1, indSup, chave);
    }
}

int main() {
    int vet[12] = {1, 3, 4, 9, 10, 12, 14, 15, 16, 20, 25, 30};
    printf("A posição do vetor é: %d\n", PesqBin(vet, 0, 9, 25));
    return 0;
}
