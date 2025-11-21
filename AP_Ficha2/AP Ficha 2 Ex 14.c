#include <stdio.h>

int main () {

    int sinal, numer, den, i, n;
    float s;
    printf("Qual o número de termos que pretende para a série");
    scanf("%d", &n);
    sinal = 1;
    s = 1;
    numer = 0;
    den = 1;

    for (i = 1; i <= n; ++i){
        sinal =-sinal;
        numer+=1;
        den*=2;
        s=s+sinal;
        printf("")
    }
}