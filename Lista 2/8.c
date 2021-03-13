#include <stdio.h>

void ordenados_p(int* vet1, int* vet2, int size1, int size2, int* vet3){
    int i, j, k;
    int tam = size1 + size2;
    for(i = 0, j = 0, k = 0; k < tam; k++){
        if(vet1[i] <= vet2[j] && i < size1){
            vet3[k] = vet1[i];
            i++;
        }else{
            vet3[k] = vet2[j];
            j++; 
        }
    }
}

void print(int* v3, int max){
    printf("[");
    for(int i = 0; i < max; i++){
        printf(" %d ", v3[i]);
    }
    printf("]\n");
}

int main(){
    int v1[] = {1,2,3,4};
    int v2[] = {-5,6,9,10};
    int v3[8];

    ordenados_p(v1, v2, 4, 4, v3);
    print(v3, 8);
    
    
}