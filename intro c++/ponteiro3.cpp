#include <iostream>

using namespace std;

// passando ponteiros por funções e variáveis

void somar(float *var, float valor);
void iniVetor(float *v);

int main() {
    float num = 0;
    float vetor[5];

    somar(&num, 15);
    iniVetor(vetor);

    cout << num << endl;

    cout << "\n";

    for (int i = 0; i < 5; i++)
    {
        cout << vetor[i] << endl;
    }
    
    
    return 0;
}

void somar(float *var, float valor){
    *var += valor;
}

void iniVetor(float *v){
    v[0] = 5;
    v[1] = 5;
    v[2] = 5;
    v[3] = 5;
    v[4] = 5;
}