#include <iostream>
#include <string>

using namespace std;

int main(){
    string txt("Sofia Sales Lima");
    cout << txt << endl;

    string::iterator it;
    it = txt.begin();

    // primeiro char
    cout << *it << endl;

    // tamanho da string
    cout << txt.size() << endl;
    cout << txt.length() << endl;

    // tamanhos e capacidade
    cout << txt.max_size() << endl;
    cout << txt.capacity() << endl;

    // limpando string
    cout << txt << endl;
    txt.clear();

    if (txt.empty())
    {
        cout << "String vazia" << endl;
    }

    //
    txt = "Sofia Sales Lima asifjaofas";
    txt.shrink_to_fit();
    cout << txt.capacity() << endl;





    return 0;
}