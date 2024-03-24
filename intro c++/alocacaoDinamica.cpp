#include <iostream>
#include <cstdio>
#include <stdlib.h>

using namespace std;

int main(){
    char vnome[50];

    char *vnome2;
    vnome2 = (char *) malloc(sizeof(char));


    // aqui nao pega ' '
    // cin >> vnome;

    // fgets(vnome, sizeof(vnome), stdin);
    // cout << vnome << endl;


    fgets(vnome2, sizeof(vnome2), stdin);
    cout << vnome2 << endl;



    return 0;
}