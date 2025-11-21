#include <stdio.h>
#include <math.h>
int main ()
{
    int a, b, c;
    float r1, r2, delta;

    printf("Escreva o valor dos coeficientes a,b e c:");
    scanf("%d %d %d",&a, &b, &c);

    if (a == 0)
        printf("A equação não é de 2º grau");
    else
        delta = b*b - 4*a*c;

        if(delta > 0)
        {
            r1 = (-b + sqrt(delta)/2*a);
            r2 = (-b - sqrt(delta)/2*a);
        } else
            printf("A equação não tem raízes reais.");

    
}