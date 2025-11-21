#include <stdio.h>

int main()
{ 
    int horas, min, minutos;

    printf("Insira os minutos: ");
    scanf("%d", min);
    if (min<0 || min > 1440){
        printf("Valor de minutos inválido");
    } else {
        horas = min /60;
        minutos = min % 60; // ou minutos = min - horas * 60
    }
    printf("%d minutos correspondem a %d:%d", min, horas, minutos);
    return 0;
}