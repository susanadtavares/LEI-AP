#include <stdio.h>
#include <string.h>

int main () 
{  
    FILE * f; //declaração de ponteiro para o ficheiro
    char str[100]; //str é um vetor
    f = fopen("dados.txt","r");// fopen tem 2 argumentos, 1º tem o mome do ficheiro e o 2ºo que que se vai fazer (r -> read)
    if (f == NULL)
    {
        printf("Erro no ficheiro");
        return 0;
    }
    while ( ! feof(f))
    {
        fgets(str, 100, f); //100 -> tamanho da string
        printf("%s\n", str);
    }
    fclose(f);
}