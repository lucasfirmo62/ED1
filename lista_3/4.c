#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print(int* vetor, int tam){
    printf("[");
    for(int i = 0; i < tam; i++){
        printf("%d", vetor[i]);
        if(i != tam-1) printf(", ");
    }
    printf("]\n");
}

int* vetor_aleatorio(int size){
    if(size < 0){
        return NULL;
    }
    int* vetor = (int*) calloc(size, sizeof(int));
    for(int i = 0; i < size; i++){
        vetor[i] = rand()%1000;
    }
    return vetor;
}

int main(){

    int *v1 = vetor_aleatorio(10);
    print(v1, 10);
    int *v2 = vetor_aleatorio(4);
    print(v2, 4);

    free(v1);
    free(v2);

    v1 = NULL;
    v2 = NULL;

}