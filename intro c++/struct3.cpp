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
    Carro *carros = new Carro[5];

    carros[0].insere("Fuscao", "Preto", 200, 50);
    carros[1].insere("El Camino", "Vermelho", 304, 200);
    carros[2].insere("BubbleBee", "Amarelo", 10, 4);
    carros[3].insere("Otimus", "Azul", 200, 80);

    for (int i = 0; i < 4; i++)
    {
        carros[i].mostra();
    }
    
    return 0;
}