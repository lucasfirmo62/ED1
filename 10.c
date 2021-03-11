#include <stdio.h>

void inverter(int tamanho, char* string, char* string_invertido){

    for(int i = tamanho; i <= 0; i--){
            string_invertido[i] = string[i];
    }

}

void print(char* string){
    printf("%s", string);
}

int main(){

    int tamanho = 5;
    char nome[] = {"UTFPR"};
    char nome_invertido[5];

    inverter(tamanho, nome, nome_invertido);
    print(nome_invertido);

}