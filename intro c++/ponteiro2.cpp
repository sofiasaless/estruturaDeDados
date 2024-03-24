#include <iostream>

using namespace std;

int main(){
    int *p;
    int *p2;
    int vetor[10];

    // atribuindo o endereço do primeiro elemento do vetor
    p = &vetor[0];
    p2 = &vetor[1];
    // p = vetor;

    cout << p << endl;
    cout << p2 << endl;

    return 0;
}