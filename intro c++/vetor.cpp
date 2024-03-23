#include <iostream>

using namespace std;

int main() {
    int vetor[6];

    cout << "Digite os valores do vetor: " << endl;
    for(int i = 0; i < 6; i++){
        cin >> vetor[i];
    }

    cout << "Valores do vetor: " << endl;
    for(int i = 0; i < 6; i++){
        cout << vetor[i] << "\n";
    }

    cout << "tamanho em bites do array: " << sizeof(vetor) << endl;
    // para pegar o tamanho do vetor é preciso dividir por 4

    return 0;
}