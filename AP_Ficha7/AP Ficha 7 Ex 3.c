#include <stdio.h>
#include <string.h>

long tamByte(FILE * fich)
{
    if (fich == NULL)
    return 0;
    fseek()
}

int main () 
{  
    FILE * f; //declaração de ponteiro para o ficheiro
    char str[100]; //str é um vetor
    f = fopen("dados.txt","w");// fopen tem 2 argumentos, 1º tem o mome do ficheiro e o 2ºo que que se vai fazer (w -> write)
    
    if (f == NULL)
    {
        printf("Erro no ficheiro");
        return 0;
    }
}