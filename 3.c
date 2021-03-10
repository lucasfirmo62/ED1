#include <stdio.h>

void conceito_equivalente1(int n, char* equivalencia){

    if(n >= 9){
        *equivalencia = 'A';
    }else if(n >= 7){
        *equivalencia = 'B';
    }else if(n >= 6){
        *equivalencia = 'C';
    }else{
        *equivalencia = 'I';
    }

}

char conceito_equivalente(int n){

    char equivalencia;

    if(n >= 9){
        equivalencia = 'A';
    }else if(n >= 7){
        equivalencia = 'B';
    }else if(n >= 6){
        equivalencia = 'C';
    }else{
        equivalencia = 'I';
    }

    return equivalencia;
}


int main(){

    int nota1 = 6;
    char resultado;

    conceito_equivalente1(nota1, &resultado);
    printf("%c\n", resultado);
    resultado = conceito_equivalente(nota1);
    printf("%c\n", resultado);

}