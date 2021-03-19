#include <stdio.h>
#include <stdlib.h>

void print(int* vetor, int tam){
    if(tam < 0){
        return;
    }
    printf("[");
    for(int i = 0; i < tam; i++){
        printf("%d", vetor[i]);
        if(i != tam-1) printf(", ");
    }
    printf("]\n");
}

int main(){
    int* v = (int*) calloc(5, sizeof(int));
    *(v) = 1;
    *(v+1) = 2;
    *(v+2) = 3;
    *(v+3) = 4;
    *(v+4) = 5;

    print(v, 5);
    print(v, 0);

    *(v) = -10;
    *(v+1) = 20;
    *(v+2) = 283;
    *(v+3) = 19;
    *(v+4) = -05;

    print(v, 5);

    free(v);

}