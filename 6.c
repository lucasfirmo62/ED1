#include <stdio.h>

int soma(int v[], int tam){
    int total_soma = 0;
    for(int i = 0; i<tam; i++){
        total_soma += v[i];
    }
    return total_soma;
}

void soma_parametro(int v[], int tam, int* total_soma){
    int soma = 0;
    for(int i = 0; i<tam; i++){
        soma += v[i];
    }
    total_soma = soma;
}

int main(){

    int total;
    int tamanho = 4;

    int vet[4] = {1,2,3,4};
    total = soma(vet, tamanho);
    printf("%d\n", total);
    soma_parametro(vet, tamanho, total);
    printf("%d\n", total);

}