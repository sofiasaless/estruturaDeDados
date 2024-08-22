bool exemplo1(vector<int> v, int X) {
    int tamanho = v.size(); // O(1) ... pois é uma constante
    for (int i = 0; i < tamanho; i++) { // uma repetição tem O(n)
        if (v[i] == X) return true; // O(1)
    }
    return false; // O(i) 
}
// complexidade ... O(n) linear, pois ignora as constantes;


bool exemplo2(vector<int> v) {
    int tamanho = v.size(); // O(1)
    for (int i = 0; i < tamanho; i++) { // O(n)
        for (int j = 0; j < tamanho; j++) { // O(n)
            if (i != j && v[i] == v[j]) // O(1) ... pois é constante
                return true; // O(1)
        }
    }
    return false; // O(1)
}
// complexidade O(n) * O(n) ---> O(n²)

int exemplo3 (vector<int> v) {
    int tamanho = v.size(); // O(1)
    int bla = 0;
    for (int i = 0; i<tamanho; i++) { // O(n)
        for (int j = 0; j < tamanho; j++) { // O(n)
            if (v[i] == v[j]) bla++;
        }
    }

    // ...

    int ble = 0;
    for (int i = 0; i < tamanho; i++) { // O(n)
        if (v[i] == 10) {
            ble = 2*ble;
        }
    }

    // ...

    int bli = 0;
    for (int i = 0; i < tamanho; i++) { // O(n)
        if (v[i] == 5) {
            bli+= 5;
        }
    }

}
// complexidade .... O(n) * O(n) + O(n) + O(n) ---> O(n²) + 2*O(n) 
// ignorando as constantes ---> O(n²) + O(n)
// usando o termo de maior grau ---> O(n²)

bool exemplo4(vector<int> v, vector<int> w) {
    int tamanho = v.size();
    int tamanho2 = w.size();
    for (int i=0; i < tamanho; i++) { // O(n)
        for (int j = 0; j < tamanho2; j++) { //O(m) ... o tamanho2 é diferente de tamanho, então muda a variável
            if(v[i] == v[j])
                return true;
        }
    }
    return false;

}
// complexidade ..... O(n) * O(m)


bool exemplo5(vector<int> idades) {
    int tamanho = idade.size();
    int menor_idade = 200;
    for(int i = 0; i < tamanho; i++) { // O(n)
        if (idades[i] < menor_idade) {
            menor_idade = idades[i];
        }
    }
    int cont = 0;
    for (int i = 0; i < tamanho; i++) { // O(n)
        if (v[i] == menor_idade) {
            cont++;
        }
    }
    return cont > 1;
}
// complexidade ..... O(n) + O(n) ---> 2*O(n)
// termo de maior grau ---> O(n)



bool exemplo6(vector<int> idades) {
    sort(idades.begin(), idades.end()); // O(NLogN)
    return idades[0] == idades[1];
}
// complexidade ..... O(NLogN)


bool exemplo7(set<int> s, vector<int> v) {
    int tamanho = v.size();
    for (int i = 0; i < tamanho; i++) { // O(n)
        if (s.count(v[i])) return true; // O(LogN)
    }
    return false;
}
// complexidade ..... O(n) * O(LogN) ----> O(NLogN)