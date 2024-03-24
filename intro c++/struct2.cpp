#include <iostream>

using namespace std;

struct Carro
{
    string nome;
    string cor;
    int pot;
    int velMax;

    void insere(string stnome, string stcor, int stpot, int stvelMax)
    {
        nome = stnome;
        cor = stcor;
        pot = stpot;
        velMax = stvelMax;
    }

    void mostra()
    {
        cout << "INFO CARRO: " << endl;
        cout << nome << endl;
        cout << cor << endl;
        cout << pot << endl;
        cout << velMax << endl;
    }

    void mudaVel(int mv){
        if (mv > velMax)
        {
            velMax = velMax;
        } else if (mv == 0)
        {
            velMax = velMax;
        } else {
            velMax = mv;
        }
        
    }

};

int main(){
    Carro car1, car2;
    car1.insere("Fuscao", "Preto", 200, 50);
    car1.mostra();
    car1.mudaVel(32);
    car1.mostra();

    return 0;
}