#include <iostream>

using namespace std;

int binomio(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    } else {
        cout << "testando: " << n << " " << k << endl;
    }    
}

int main(){
    int n, k;
    cin >> n;
    cin >> k;

    binomio(n, k);
    return 0;
}