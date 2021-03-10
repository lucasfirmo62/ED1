#include <stdio.h>


int maior_elemento(int v, int tam){
    int total = 0;
        for(int i = 0; i < tam; i++){
            total += v[i];
        }
        return total;
}


int main(){
    int tamanho = 4;
    int vet[tamanho] = {1,2,3,4};
    int resultado;

    maior_elemento(vet, tamanho);
    resultado = maior_elemento(vet, tamanho);

}