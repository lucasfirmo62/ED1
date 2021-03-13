#include <stdio.h>

void inverter(int* size, char* string, char* string_invertido){

    char aux[*size];
    int j = 0;
    for(int i = (*size); i >= 0; i--){
            *(string_invertido+j) = string[i];
            j++;
    }

}

void print(char* string1, int* sizing){
    for(int i  = 0; i < (*sizing); i++){
        printf("%c", string1[i]);
    }
    printf("\n");
}

int main(){

    int tamanho = 5;
    char nome[] = {"UTFPR"};
    char nome_invertido[tamanho];

    inverter(&tamanho, nome, nome_invertido);
    print(nome_invertido, &tamanho);

}