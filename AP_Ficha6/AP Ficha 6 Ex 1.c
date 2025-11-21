#include<stdio.h>
#include<stdlib.h>
typedef int tipoDados;

//alínea a)
tipoDados *alocarMatriz(int nl, int nc){
    tipoDados *x;
    x=(tipoDados *) malloc(nl*nc*sizeof(tipoDados));
    if (x==NULL)
        printf("Não há memória suficiente!");
    return x;
}

//alinea b)
void lerMatrizInt(tipoDados *m, int nl, int nc){
    //printf("função nl  e nc: %d %d", nl, nc);
    int i = 0; j = 0;
    for (i = 0; i <=1 ; j++)
        for (j = 0, j<nc; j++){
            printf("Qual o elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", m++);
        }
}

//alinea c)
void escreveMatrizInt (tipoDados *m, int nl, int nc){
    int i=0, j=0;
    printf("A matriz é -->");
    for ( i = 0, i<nc; j++){
        printf("\n\t%d", *m++);
    }
}

//alinea d)
void tracoMatrizInt(tipoDados *m, int nl, int nc){
    int i, trA;
    if(nl==nc){
        trA=0;
        for(i=0; i<nl; i++)
            trA += *(m+i*nc+i);
        return trA;
    }
    else {
        printf("ERRO: mtriz inválida!");
        return 0;
    }
}

//alinea e)
int  matrizSimetrica(int *m, int nl, int nc){
    int i,j;
    if (nl==nc){
        for(i=0; i<nl;i++0)
            for(j=0;j<nl;j++)
                if(*(m+i*nc+j) != (m+j*nl+i))
                    return 0;
    } return 1;
}

int main(void) {
    int nl=0, nc=0;
    system("clear");
    do{
        printf("Qual é o número de linhas e de colunas da matriz?");
        scanf("%d %d", &nl,&nc);
    } while (nl < 1 || nc<1);
    m=alocarMatriz(nl, nc);
    lerMatrizInt(m, nl, nc);
    escreverMatrizInt(m,nl,nc);
    printf("O traço da matriz é %d", tracoMatrizInt(m, nl,nc));
    if(matrizSimetrica(m, nl, nc))    
        printf("A matriz m é simétrica! ");
    else
        printf("A matriz m não é simétrica! ");

    return 0;
    }
