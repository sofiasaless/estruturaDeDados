#include <iostream>

using namespace std;

struct Carro
{
    string nome;
    string cor;
    int pot;
    int velMax;
};

int main(){
    Carro car1, car2;

    car1.nome = "Fuscao";
    car1.cor = "preto";
    car1.pot = 100;
    car1.velMax = 50;

    car2.nome = "El Camino";
    car2.cor = "vermelho";
    car2.pot = 350;
    car2.velMax = 600;


    cout << "INFO CARRO 1: " << endl;
    cout << car1.nome << endl;
    cout << car1.cor << endl;
    cout << car1.pot << endl;
    cout << car1.velMax << endl;

    cout << "INFO CARRO 2: " << endl;
    cout << car2.nome << endl;
    cout << car2.cor << endl;
    cout << car2.pot << endl;
    cout << car2.velMax << endl;


    return 0;
}