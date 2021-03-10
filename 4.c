#include <stdio.h>

void inicializa(int* vet, int tam, int valor){
    for (int i = 0; i < tam; i++){
        vet[i] = valor; 
    }
}

void multiplica(int* vet, int tam){
    for (int i = 0; i < tam; i++){
        vet[i] *= - 1; 
    }
}

void print(int* vet, int tam){
    printf("[");
    for(int i = 0; i < tam; i++){
        printf("%d", vet[i]);
        if(i < (tam-1)) printf(",");
    }
    printf("]\n");
}

int main(){
    int vet1[10];
    int vet2[5];
    int valor1 = 1;
    int TAM1 = 10;
    int valor2 = 20;
    int TAM2 = 5;

    inicializa(vet1, TAM1, valor1);
    print(vet1, TAM1);
    multiplica(vet1, TAM1);
    print(vet1, TAM1);
    inicializa(vet2, TAM2, valor2);
    print(vet2, TAM2);
    multiplica(vet2, TAM2);
    print(vet2, TAM2);
}
