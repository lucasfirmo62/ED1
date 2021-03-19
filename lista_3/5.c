#include <stdlib.h>
#include <stdio.h>

void vetor_incrementa(int v, int tam){
    if(tam < 0){
        return;
    }
    for(int i = 0; i < tam; i++){
        v[i] += 1;
    }

}

int main(){

    int v1[5] = {10,20,30,40,50};
    vetor_incrementa(v1, 5);

}