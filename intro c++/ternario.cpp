#include <iostream>

using namespace std;

int main(){
    // sintaxe:
    // (expressao) ? valor1 : valor2

    int n1,n2,nota;
    string res;

    cout << "Digite a primeira nota: ";
    cin >> n1;
    cout << "Digite a segunda nota: ";
    cin >> n2;

    nota = n1+n2;

    // >= 60 APROVADO
    // <60 REPROVADO

    (nota >= 60) ? res = "APROVADO": res = "REPROVADO";

    // ou

    res = (nota >= 60) ? "APROVADO":"REPROVADO";

    cout << res << endl;
    cout << nota << endl;

    return 0;
}