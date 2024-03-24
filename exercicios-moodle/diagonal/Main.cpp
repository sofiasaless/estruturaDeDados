#include <iostream>
#include <cstring>

using namespace std;

void diagonal(char * s, int k){
    if (k == strlen(s)) {
        return;
    }
    if (*s == '\0') {
        return;
    } else {
        //imprima k caracteres
        for (int i = 0; i < k; i++) {
            cout << " ";
        }
        //imprima o primeiro caractere de s e pule a linha
        cout << s[k] << endl;
        //faça a chamada recursiva
        diagonal(s, k + 1);
    }
}

int main() {
    char nome[100];
    cin >> nome;
    
    diagonal(nome, 0);
    
}