#include <stdio.h>

int soma(int v[4]){
    int total_soma = 0;
    for(int i = 0; i<4; i++){
        total_soma += v[i];
    }
    return total_soma;
}

void soma_parametro(int v[4], int* total_soma){
    int soma = 0;
    for(int i = 0; i<4; i++){
        soma += v[i];
    }
    total_soma = soma;
}

int main(){

    int total;

    int vet[4] = {1,2,3,4};
    total = soma(vet);
    printf("%d\n", total);
    soma_parametro(vet, total);
    printf("%d\n", total);

}