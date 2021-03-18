#include <stdio.h>
#include <stdlib.h>


void print(int* vetor, int tam){
    printf("[");
    for(int i = 0; i < tam; i++){
        printf("%d", vetor[i]);
        if(i != tam-1) printf(", ");
    }
    printf("]\n");
}

void preencher_p(int** vetor, int tamanho){
    *vetor = (int*) calloc(tamanho, sizeof(int));
    for(int i = 0; i < tamanho; i++){
        *(*vetor+i) = tamanho*(i);
    }
    
}

int* preencher(int tamanho){
    int* vetor = (int*) calloc(tamanho, sizeof(int));
    for(int i = 0; i < tamanho; i++){
        *(vetor+i) = tamanho*(i);
    }
    return vetor;
}

int main(){

    int tam = 5;
    int* v1;
    int* v2;

    preencher_p(&v1, tam);
    print(v1, tam);
    v2 = preencher(tam);
    print(v2, tam);

    free(v1);
    v1 = NULL;

}