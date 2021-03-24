#include <stdio.h>
#include <stdlib.h>

int* cloneA(int v[], int tam){
    if(tam < 0){
        return 0;
    }
    int* v_copia = (int*) calloc(tam, sizeof(int));
    for(int i = 0; i < tam; i++){
        *(v_copia) = v[i];
    }
    return v_copia;
}

void cloneB(int v[], int tam, int** v_copia){
    if(tam < 0){
        return;
    }
    *v_copia = (int*) calloc(tam, sizeof(int));
    for(int i  = 0; i < tam; i++){
        *(*v_copia+i) = v[i];
    }
}

void print(int* vetor, int tam){
    printf("[");
    for(int i = 0; i < tam; i++){
        printf("%d", vetor[i]);
        if(i != tam-1) printf(", ");
    }
    printf("]\n");
}

int main(){

    int v[5] = {1,2,3,4,5};
    int *copia1, *copia2;

    copia1 = cloneA(v, 5);
    print(copia1, 5);
    cloneB(v, 5, &copia2);
    print(copia2, 5);

}