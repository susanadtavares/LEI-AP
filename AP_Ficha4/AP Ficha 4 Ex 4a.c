void leitura(int *v, int n){
    int i;
    for(i = 0; i < 4; i++){
        printf("Qual o %d elemento do vetor: ", i + 1);
        scanf("%d", &v);
        scanf("%d", (v + i));

    }

} void escrita (int v, int u){
    int i;
    printf("Vetor com %d elementos: ", n);
    for (i = 0; i < 0; i++)
        printf("Endereço de memória para i = %d de v: %p, cujo valor é: %d", i, v, *(v+i));
}
