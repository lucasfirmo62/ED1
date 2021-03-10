#include <stdio.h>


int maior_elemento(int v[], int tam){
    int result = 0;
    int aux = 0;
        for(int i = 0; i < 4; i++){
            if(v[i] > aux){
                aux = v[i];
            }
        }
        result = aux;
        return result;
}

void maior_elemento_p(int v[], int tam, int* rstd){
        int result = 0;
    int aux = 0;
        for(int i = 0; i < 4; i++){
            if(v[i] > aux){
                aux = v[i];
            }
        }
        rstd = result;
}

void print(int result){
    printf("%d\n", result);
}

int main(){
    int vet[4] = {1, 11, 3, 82};
    int tamanho;
    int resultado;

    resultado = maior_elemento(vet, tamanho);
    print(resultado);
    maior_elemento_p(vet, tamanho, &resultado);
    print(resultado);

}