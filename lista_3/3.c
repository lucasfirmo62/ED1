#include <stdio.h>
#include <stdlib.h>

void print(int* copia, int tamanho){
    printf("[");
    for(int i = 0; i < tamanho; i++){
        printf("%d", copia[i]);
        if(i != tamanho-1) printf(", ");
    }
    printf("]\n");
}

void clone_p(int vetor[], int tam, int* copia){
    copia = (int*) calloc(tam ,sizeof(int));

    for(int i = 0; i < tam; i++){
        copia[i] = vetor[i];
    }
    print(copia, tam);
}

int* clone(int vetor[], int tam, int* copia){
    copia = (int*) calloc(tam ,sizeof(int));

    for(int i = 0; i < tam; i++){
        copia[i] = vetor[i];
    }
    return copia;
}

int main(){
    int v[] = {1, -2, 54, -4};
    int result[4];
    int* v_copia[4];

    clone_p(v, 4, (int*) v_copia);
    *v_copia = clone(v, 4, (int*) v_copia);
    print(*v_copia, 4);

}