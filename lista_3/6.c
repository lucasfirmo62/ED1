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

int vetor_dobraTamanho(int** vetor, int tam){
    int novo_tam = tam*2;
    int* novo = (int*) calloc(novo_tam, sizeof(int));
    for(int i = 0; i < novo_tam; i++){
        novo[i] = 0;
    }

    for(int j = 0; j < tam; j++){
        novo[j] = (*vetor)[j];
    }

    print(novo, novo_tam);

    free(novo);
    novo = NULL;

    return 0;
}

int main(){

    int* v = (int*) calloc(3, sizeof(int));
    v[0] = 2;
    v[1] = 4;
    v[2] = 6;
    int novoTamanho = vetor_dobraTamanho(&v,3);
    //Resultado esperado
    // [2,4,6,0,0,0]

    free(v);
    v = NULL;

}