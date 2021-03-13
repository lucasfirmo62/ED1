#include <stdio.h>

int ordenacao(){
    
}

void ordenacao_p(int vetor1[], int tam1, int vetor2[], int tam2, int* vetor3, int tam3){
    int aux;
        aux = vetor1[i];
    for(int i = 0; i < tam1; i++){
        if(aux <= vetor1[i]){
            vetor3[i] = vetor1[i];
        }else if(){
            i++;
        }
        
    }
    for(int i = 1; i < tam2; i++){
        vetor3[i] = vetor2[i];
    }
}

void print(int vetor[8]){
    for(int i = 0; i < 8; i++){
        printf("%d", vetor[i]);
    }
}

int main(){
    int t1 = 4, t2 = 4;
    int vet1[4] = {1,2,3,4};
    int vet2[4] = {5,6,7,8};
    int t3 = t1 + t2;
    int vet3[];

    ordenacao_p(vet1, t1, vet2, t2, vet3, t3);
    print(vet3);

}