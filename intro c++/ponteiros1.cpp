#include <iostream>

using namespace std;

int main(){
    string veiculo = "carro";
    string *pv;
    
    pv = &veiculo; // ponteiro pv recebe endereço da variável veículo
    
    cout << veiculo << endl; // variavel
    cout << pv << endl; // endereço da variavel
    cout << *pv << endl; // variável


    // manipulando o conteudo da variavel pelo ponteiro

    *pv = "Moto";
    cout << *pv << endl; 
    return 0;

}