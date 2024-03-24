#include <iostream>

using namespace std;

int fatorial(int num){
    if (num == 0)
    {
        return 1;
    }    
    
    return num * fatorial(num-1);
    
}

int main(){
    int resultado = fatorial(7);
    cout << "RESULTADO: " << resultado << endl;
    return 0;
}