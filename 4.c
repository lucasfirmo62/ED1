#include <stdio.h>

void inicializa_1(int* vet, int tam, int valor){
    for (int i = 0; i < tam; i++){
        vet[i] = valor; 
    }
}

void multiplica_menos_1(int* vet, int tam){
    for (int i = 0; i < tam; i++){
        vet[i] *= - 1; 
    }
}

void inicializa_20(int* vet, int tam, int valor){
    for (int i = 0; i < tam; i++){
        vet[i] = 20; 
    }
}

void multiplica_2(int* vet, int tam){
    for (int i = 0; i < tam; i++){
            vet[i] *= 2; 
    }
}

int main(){
    int vet1[10];
    int vet2[5];
    int valor1 = 1;
    int TAM1 = 10;
    int valor2 = 20;
    int TAM2 = 5;

    inicializa_1(vet1, TAM1, valor1);
    printf("[");
    for(int i = 0; i < 10; i++){
        printf("%d", vet1[i]);
        if(i < 9) printf(",");
    }
    printf("]\n");
    multiplica_menos_1(vet1, TAM1);
    printf("[");
    for(int i = 0; i < 10; i++){
        printf("%d", vet1[i]);
        if(i < 9) printf(",");
    }
    printf("]\n");
    inicializa_20(vet2, TAM2, valor2);
    printf("[");
    for (int i = 0; i < 5; i++){
        printf("%d", vet2[i]);
    if(i < 4) printf(",");
    }
    printf("]\n");
    multiplica_2(vet2, TAM2);
    printf("[");
    for (int i = 0; i < 5; i++){
        printf("%d", vet2[i]);
    if(i < 4) printf(",");
    }
    printf("]\n");
}
