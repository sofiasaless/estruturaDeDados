#include <iostream>
#include <cstring> // usei a biblioteca para pegar o tamanho do nome

using namespace std;

void sufixos(char * nome, int tamanho){
    if (tamanho < 0) {
        return;
    }
    if(*nome == '\0'){
        return;
    }else{
        cout << nome + tamanho << endl;
        sufixos(nome, (tamanho-1));
    }
}

int main(){
    char nome[100];
    cin >> nome;
    int tam = strlen(nome) - 1;

    sufixos(nome, tam);

    return 0;
}