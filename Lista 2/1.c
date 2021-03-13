#include <stdio.h>

void potencia1(int n1, int* result){

    int total = 1;

    for(int i = 0; i < n1; i++){

        total = total * n1;
    
    }

    *result = total;

}

int potencia(int n1){
    int total = 1;

    for(int i = 0; i < n1; i++){
        total = total * n1;
    }

    return total;
}


int main(){

    int a = 4;
    int resultado;

    potencia1(a, &resultado);
    printf("resultado: %d\n", resultado);
    resultado =  potencia(a);
    printf("resultado: %d\n", resultado);


}