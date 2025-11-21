#include <stdio.h>

int main ()
{
    float base, altura, area, x1;
    
    printf("Indique a base do triangulo:");
    scanf("%f", &base);
    
    printf("Indique a altura do triangulo: ");
    scanf("%f", &altura);
    
    area = base * altura / 2;
    
    printf("A area do triangulo e %.2f", area);
    scanf("%f", &x1);
    
    return 0;
}
