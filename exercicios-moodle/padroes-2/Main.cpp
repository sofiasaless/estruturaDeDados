#include <iostream>

using namespace std;

int padroes(int num){
    // caso base
    if(num == 1){
        return 3;
    }
    // sem recursividade
    // como faz com recursividade ??????????
    return num * (num + 2); 
}

int main() {
    int num;
    cin >> num;
    
    cout << padroes(num) << endl;
    
}