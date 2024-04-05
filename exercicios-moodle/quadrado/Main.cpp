#include <iostream>
#include <cmath> // usei pra fazer a exponenciação
using namespace std;

void quadrado(int n) {
    if(n == 0){
        return;
    }
    if(n == 1) {
        cout << n << "^2 = " << pow(n, 2) << endl;
        return;
    }
    cout << n << "^2 = " << n - 1 << "^2 + 2*" << n - 1 << " + 1 = ?" << endl;
    quadrado(n - 1);
    int res = pow(n - 1, 2) + 2 * (n - 1) + 1;
    cout << n << "^2 = " << n - 1 << "^2 + 2*" << n - 1 << " + 1 = " << res << endl;
}

int main() {
    int n;
    cin >> n;
    quadrado(n);
    return 0;
}