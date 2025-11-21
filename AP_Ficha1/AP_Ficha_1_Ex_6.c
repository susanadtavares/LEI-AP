#include <stdio.h>
#include <math.h>
int main () {
    int lado1, lado2, x1;
    float hipotenusa;

    printf("insira a medida do lado 1: ");
    scanf("%d", &lado1);

    printf("insira a medida do lado 2: ");
    scanf("%d", &lado2);

    hipotenusa = pow(lado1, 2) + pow(lado2, 2);

    printf("A hipotenusa do triangulo é %f ", sqrt(hipotenusa));

    return 0;
}
