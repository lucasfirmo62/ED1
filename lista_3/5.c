#include <stdlib.h>
#include <stdio.h>

void vetor_incrementa(int v[], int tam){
    if(tam < 0){
        return;
    }
    for(int i = 0; i < tam; i++){
        v[i] += 1;
    }

}

void print(int v[], int tam){
    printf("[");
    for(int i = 0; i < tam; i++){
        printf(" %d ", v[i]);
    }
    printf("]\n");
}

int main(){

    int v1[5] = {10,20,30,40,50};
    vetor_incrementa(v1, 5);
    print(v1, 5);

}