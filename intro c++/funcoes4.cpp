#include <iostream>

using namespace std;

void contagem(int num);
void contador(int num, int cont=0);

int main(){
    // contagem(10);

    contador(10);
    return 0;
}

// feita por mim
// .. ta contando de forma decrescente
void contagem(int num){
    if (num > 0)
    {
        cout << num << endl;
        contagem(num - 1);
    }    
}

void contador(int num, int cont){
    cout << cont << endl;
    if (num > cont)
    {
        contador(num, ++cont);
    }
    
}