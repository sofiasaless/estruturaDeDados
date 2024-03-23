#include <iostream>

using namespace std;

int exp1(int a, int b) {
    int res = 1;

    for (int i = 1; i <= b; i++){
        res = res * a;
    }

    return res;
}

// usando recursão
int exp2(int a, int b){
    if (b == 0){
        return 1;
    } else {
        return a * exp2(a, b-1);
    }
}

// a^b = {b = 0 ... 1; b é par ... (a^b/2)^2; b é impar ... a * a^b-1}
int exp3(int a, int b) {
    if(b == 0) {
        return 1;
    } else if (b%2 == 0) {
        int x = exp3(a, b/2);
        return x*x;
    } else {
        return a * exp3(a, b-1);
    }
}

int main(){
    int a, b;

    a = 2;
    b = 10;

    cout << exp3(a,b);

    return 0;
}