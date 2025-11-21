/*
    6. Desenvolva uma função que apresente no ecrã os N primeiros números inteiros, por ordem decrescente. 

*/

#include <stdio.h>

void numerosDecrescentes(int N) {
    for (int i = N; i >= 1; i--) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int N;  
    printf("Indique a quantidade de números");
    scanf("%d", &N);

    printf("Os %d primeiros números inteiros por ordem decrescente:\n", N);
    numerosDecrescentes(N);

    return 0;
}