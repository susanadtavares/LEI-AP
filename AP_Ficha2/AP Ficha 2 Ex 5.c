#include <stdio.h>

int main(){
    int num;
    int contPar = 0;
    int contImpar = 0;
        printf("Introduza um número: ");
        scanf("%d", &num);

        if (num >= 0){
    if( num % 2 == 0)
        contPar++;
    else
        contImpar++;
}
    while (num >= 0)
        printf("Foram introduzidos x numeros");
}