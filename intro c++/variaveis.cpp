#include <iostream>

using namespace std;

int main(){
    int vidas = 0;
    float notas = 4.2;
    double media = 1.4;
    char letra = 'B'; // recebe apenas 1 caracter
    char letras[20];
    bool vivo = true;
    bool morto = false;
    string nome = "Sofia";

    // entrada e saída de dados
    cout << "Digite o número de vidas: ";
    cin >> vidas;

    cout << "Digite uma letra: ";
    cin >> letra;


    cout << letra << endl;
    cout << vidas << endl;
    cout << notas << endl;
    cout << media << endl;

    return 0;
}