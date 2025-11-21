#include <stdio.h>

int main(){
    int i;
    int n;
    int soma;
    int par;
    printf("Introduza um número: ");
    scanf("%d", &n);
    while(soma < n){
        par = par + 2;
        soma = soma + par;
    }
    printf("O maior número par é : %d", par);

    return 0;
}