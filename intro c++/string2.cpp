#include <iostream>
#include <string>

using namespace std;

int main(){
    string txt("Sofia Sales Lima");
    int tam = txt.size();

    for (int i = 0; i < tam; i++)
    {
        // ambos sao a mesma coisa
        // cout << txt[i];
        cout << txt.at(i);

    }
    cout << endl;
    
    cout << "ULTIMO ELEMENTO: " << txt.back() << endl;
    cout << "PRIMEIRO ELEMENTO: " << txt.front() << endl;

    // anexando e inserindo 
    txt.append(" crazy");
    txt.insert(10, " alguma coisa aqui ");
    cout << txt << endl;

    // apagando
    txt.erase(2,5);
    cout << txt << endl;


    return 0;
}