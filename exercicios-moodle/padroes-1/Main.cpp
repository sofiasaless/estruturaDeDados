#include <iostream>

// 1 = 20
// n = (n - 1) + 8

using namespace std;

int padroes(int num){
    // caso base
    if (num == 1) {
        return 20;
    }
    return padroes(num - 1) + 8;
}

int main() {
    int num;
    cin >> num;
    
    cout << padroes(num) << endl;
}