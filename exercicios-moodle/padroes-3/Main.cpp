#include <iostream>
using namespace std;

int padroes(int n, int m){
    if(m == 1){
        return 1;
    }
    
    // PADRÃO:
    // quando é par soma + m
    // quando é ímpar multiplica * 2 e subtrai - 1
    // vai multiplicar (n - 3) por (m - 1) pra obter o número de vezes que multiplica 
    
    return (padroes(n, m - 1) + m) + (n - 3) * (m - 1);
    
    // achar lógica para cada sequencia n ??
    // ACHAR LÓGICA QUE ENGLOBE TODOS OS CASOS
    
    // if(n == 3){
    //     return padroes(n, m - 1) + m;
    // }
    // if(n == 4){
    //     return padroes(n, m - 1) + 2 * m - 1;
    // }
    // if(n == 5){
    //     return padroes(n, m - 1) + 2 * (m - 1) + m;
    // }
    // if(n == 6){
    //     return padroes(n, m - 1) + 2 * (m - 1) + 2 * m - 1;
    // }
    // if(n == 7){
    //     return padroes(n, m - 1) + 2 * (m - 1) + 2 * (m - 1) + m;
    // }
    
    return 0;
}

int main(){
    int n;
    int m;
    cin >> n;
    cin >> m;
    cout << padroes(n, m) << endl;
    return 0;
}

// CONSEGUI AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA