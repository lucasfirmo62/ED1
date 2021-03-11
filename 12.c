#include <stdio.h>

void copiar(int* tamanho, char* string, char* copia_string){
    for(int i = 0; i < *tamanho; i++){
        copia_string[i] = string[i];
    }
}

void print(char* string, int* tamanho){
    printf("%s\n", string);
}


int main(){
    int tamanho = 30;
    char frase[] = {"Eu estudo na UTFPR"};
    char copia_frase[30];

    copiar(&tamanho, frase, copia_frase);
    print(copia_frase, &tamanho);

}