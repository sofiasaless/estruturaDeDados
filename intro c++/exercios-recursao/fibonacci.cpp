#include <iostream>

using namespace std;

int fibo(int num){
    if (num == 1 || num == 2)
    {
        return 1;
    } else
    {
        return fibo(num-1) + fibo(num-2);
    }
    
}

int main(){
    int value = 8;
    for (int i = 0; i < value; i++)
    {
        cout << fibo(i+1) << endl;
    }

    return 0;
}