#include <stdio.h>

int main ()
{
    char car;

    printf("Insira o caracter: ");
    scanf("%c", &car);

    if ( car >= 'A' && car <= 'Z'){
         printf("Letra maiúscula");
    }
        else if (car >= 'a' && car <= 'z' ){
            printf("Letra minúscula");

            } else if ((car >= '0') && (car <= '9')){
                printf("É um dígito");

                } else if (car=='!' || car=='?' || car=='.' || car==';' == car==',') {
                    printf("Pontuacao");

                    } else {
                        printf("Outro caracter");
                    }
    return 0;
}
                

            

        
       


