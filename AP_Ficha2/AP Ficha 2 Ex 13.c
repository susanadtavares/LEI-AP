#include <stdio.h>

int main(){
    int n,i, sinal;
    float s;
    do {
        printf("\n Qual é o número de termos que pretende para a série n>1?");
        scanf("%d", &n);
    }
    while(n<=1);
    sinal=1;
    s = 1;
    for(i=1; i<=n; ++i){
        sinal=-sinal;
        s=s+sinal/(2.0*i);
    }
    printf("soma = %0.4f", s);
    printf(" \n FIM");
    return 0;
}
