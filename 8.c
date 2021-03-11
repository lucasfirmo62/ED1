#include <stdio.h>

int ordenacao(){
    
}

void ordenacao_p(int vetor1[4], int vetor2[4], int* vetor3){
    for(int i = 0; i < 4; i++){
        vetor3[i] = vetor1[i];
        
    }
    for(int i = 1; i < 4; i++){
        vetor3[i] = vetor2[i];
    }
}

void print(int vetor[8]){
    for(int i = 0; i < 8; i++){
        printf("%d", vetor[i]);
    }
}

int main(){

    int vet1[4] = {1,2,3,4};
    int vet2[4] = {5,6,7,8};
    int vet3[8];

    ordenacao_p(vet1, vet2, vet3);
    print(vet3);

}