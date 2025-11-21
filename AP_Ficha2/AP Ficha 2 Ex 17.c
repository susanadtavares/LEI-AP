#include <stdio.h>
    
int main(){


    int b;
    float a;
    float res = 1; //porque a elevado a 0 é 1
    while (b > 0)
    {
        res *=a;
        b--;
    }
    printf("\n\n %.3f elevado a %d = %.5f", a, b, res);

    return 0;

}
    