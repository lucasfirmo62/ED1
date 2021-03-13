#include <stdio.h>

int orden_inversa(n){

    int resultado;

    if((n > 999) && (n < 9999)){

        int n1 = n%10;
        int n2 = n/10;
        n1 = n1*1000;
        int m1 = n2%10;
        int m2 = n2/10;
        m1 = m1*100;
        int t1 = m2%10;
        int t2 = m2/10;
        t1 = t1*10;
        resultado = n1 + m1 + t1 + t2;


    }else if((n > 99) && (n < 999)){

        int m1 = n%10;
        int m2 = n/10;
        m1 = m1*100;
        int t1 = m2%10;
        int t2 = m2/10;
        t1 = t1*10;
        resultado = m1 + t1 + t2;

    }else if((n < 99) && (n > 9)){

        int t1 = n%10;
        int t2 = n/10;
        t1 = t1*10;
        resultado = t1 + t2;

    }

    return resultado;
}


void orden_inversa1(){


}



int main(){

    int a = 923;

    int resultado;
    resultado = orden_inversa(a);

    printf("%d\n", resultado);

}