/*
    Implementa un programa en C++ que tome un entero impar n≥5 como entrada e imprima por consola un patrón
    con una forma específica utilizando el carácter asterisco ('*') y espacios (' ').
*/

#include <iostream>
using namespace std;

void dibujarPatron(int x) {
    int m = (x - 1) / 2;

    for(int l = 0; l < m; ++l){
        int ast1 = m - l + 1;
        int esp2 = m - 1 - l;
        int ast2 = l + 1;


        for(int i = 0; i < l; ++i){
            cout << " ";
        }

        for(int i = 0; i < ast1; ++i){
            cout << "*";
        }

        for(int i = 0; i < esp2; ++i){
            cout << " ";
        }

        for(int i = 0; i < ast2; ++i){
            cout << "*";
        }
        cout << endl;
    }

    for(int i = 0; i < x; ++i){
        cout << "*";
    }
    cout << endl;

    for(int l = 0; l < m; ++l){
        int ast1 = m - l;
        int ast2 = m + l - 1;

        
        for(int i = 0; i < ast1; ++i){
            cout << "*";
        }
        
        for(int i = 0; i < l; ++i){
            cout << " ";
        }
        
        for(int i = 0; i < ast2; ++i){
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    int n;

    do{
        cout << "Escriba un numero entero impar mayor o igual a 5: ";
        cin >> n;
    }while (n < 5 || n % 2 == 0);

    dibujarPatron(n);

    return 0;
}