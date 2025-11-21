#include <stdio.h>

int main ()
{
         int n1, n2, n3, maior, x1;
         
         printf ("Indique os numeros: ");
         scanf("%d, %d, %d", &n1 ,&n2 ,&n3);
         
         if (n1 > n2) {
            maior = n1;
         } else {
             maior = n2;
         }
         if (n3 > maior){
            maior = n3;
         }
            
         printf("O maior numero e %d", maior);      
         scanf("%d", &x1);
         return 0;
}
