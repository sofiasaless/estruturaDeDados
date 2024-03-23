#include <iostream>

using namespace std;

// ao colocar uma função após a main, é preciso declarar antes da main para ser reconhecida;

void texto2();
void soma(int n1, int n2);
int somaValor(int n1, int n2);
void imprimir(string transfer[4]);

void texto(){
    cout << "ned ama sachê" << endl;
}

int main(){
    texto();
    texto2();
    soma(2,4);

    string veiculos[4] = {"carro", "moto", "barco", "bike"};

    cout << "retornando soma: " << somaValor(93,2) << endl;

    imprimir(veiculos);

    return 0;
}

void texto2(){
    cout << "cloroquina dorme na cuscuzeira" << endl;
}

void soma(int n1, int n2) {
    int res = n1 + n2;
    cout << res << endl;
}

int somaValor(int n1, int n2){
    return n1 + n2;
}

void imprimir(string transfer[4]){
    for(int i = 0; i < 4; i++){
        cout << transfer[i] << endl;
    }
}