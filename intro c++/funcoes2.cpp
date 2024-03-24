#include <iostream>

using namespace std;

// SOBRECARGA DE FUNÇÕES
// é apenas mesma coisa que no java ...

void soma();
void soma(int n1, int n2);

int main(){
    soma();

    cout << "COM SOBRECARGA DE FUNÇÃO:" << endl;

    soma(5,12);

    return 0;
}

void soma(int n1, int n2){
    cout << "Soma de " << n1 << " com " << n2 << " = " << n1+n2 << endl;

}

void soma(){
    int n1, n2, re;
    n1 = 10;
    n2 = 20;
    re = n1 + n2;

    cout << "Soma de " << n1 << " com " << n2 << " = " << re << endl;
}