#include <stdio.h>

int main()
{ 
    int horas, min, minutos;
    char letra;

    printf("Insira os minutos: ");
    scanf("%d", &min);
    if (min<0 || min > 1440){
        printf("Valor de minutos inválido");
    } else {
        horas = min /60;
        minutos = min % 60; // ou minutos = min - horas * 60
    }
    if (horas < 12) {
        letra = 'a';
    } else {
        horas = horas - 1;
        letra = 'p';
    } 
    printf("%d minutos correspondem a %d:%d %c.m", min, horas, minutos, letra);
    return 0;
}