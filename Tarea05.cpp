/*
    Escribe un programa en C++ que tome un entero impar n≥3 como entrada e imprima
    por consola un patrón triangular utilizando el carácter asterisco ('*').

*/

#include<iostream>
using namespace std;

void dibujarPatron(int x){
    int i, j;

    for(i = 1; i <= x; i++){
        cout<<"* ";
    }
    cout<<endl;

    for(j = 1; j <= x - 2; j++){
        for(i = 1; i<=j; i++){
            cout<<" ";
        }
        cout<<"*";
        for(i = 2*j-1; i <= 2*x-5; i++){
            cout<<" ";
        }
        cout<<"*";
        for(i = 1; i <= 2*j-1; i++){
            cout<<" ";
        }
        cout<<"*";
        cout<<endl;
    }

    for(i = 1; i <= x - 1; i++){
        cout<<" ";
    }

    for(i = 1; i <= x; i++){
        cout<<"* ";
    }
}

int main(){
    
    int n;
    
    do{
        cout<<"Escriba un numero entero impar mayor a 3: ";
        cin>>n;
    }while(n<3 || n%2==0);

    dibujarPatron(n);
    
    return 0;
}