#include <iostream>

using namespace std;

// OMISSÃO DE ARGUMENTOS E ARGUMENTOS PADRÃO

// fazendo no protótipo vai ta passando um valor padrão 
void imp(string txt="");

int main(){
    imp("Sofia Sales");
    imp();

    return 0;
}

void imp(string txt){
    cout << txt << endl;
}