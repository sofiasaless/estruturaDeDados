#include <iostream>

using namespace std;

int escada(int num){
    if(num == 1 | num == 2){
        return 1;
    }
    if(num == 3){
        return 2;
    }
    return escada(num - 1) + escada(num - 3);
}

int main(){
    int n;
    cin >> n;
    cout << escada(n) << endl;
    
    return 0;
}