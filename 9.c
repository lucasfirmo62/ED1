#include <stdio.h>

void contador(int* qtd, char string[], int tam){
    int count = 0;
    for(int i = 0; i < tam; i++){
        if(string[i] == '\0'){
            break;
        }
        count++;
    }
        *qtd = count;
}

void print(int* qtd){
    printf("%d\n", *qtd);
}


int main(){

    char nome[] = {"meu nome é Serena van der Woodsen"};
    int quantidade = 0;
    int tamanho = 50;

    contador(&quantidade, nome, tamanho);
    print(&quantidade);


}