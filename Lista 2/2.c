#include <stdio.h>
#include <math.h>


int conta_digito(int n){
    int i = 0;

    while(n >= 1){
        n = n/10;
        i++;
    }

    return i;
}


int orden_inversa(int n){

    int cont;
    cont = conta_digito(n);
    int result = 0;
    int div = (pow(10,cont-1));
    int mult = 1;
    int aux = 0;

    while(div >= 1){
        aux = n/div;
        result += aux * mult;
        n = n%div;
        mult *= 10;
        div = div/10;
    }

    return result;

}


void orden_inversa1(int n, int* resultado){

    int cont;
    cont = conta_digito(n);
    *resultado = 0;
    int div = (pow(10,cont-1));
    int mult = 1;
    int aux = 0;

    while(div >= 1){
        aux = n/div;
        (*resultado) += aux * mult;
        n = n%div;
        mult *= 10;
        div = div/10;
    }

}



int main(){

    int a = 923;
    int b = 238823;

    int resultado;
    resultado = orden_inversa(a);
    printf("%d\n", resultado);
    orden_inversa1(a, &resultado);
    printf("%d\n", resultado);
    resultado = orden_inversa(b);
    printf("%d\n", resultado);
    orden_inversa1(b, &resultado);
    printf("%d\n", resultado);


}