/*
    Escribe un programa en C++ que tome un entero impar n≥3 como entrada e imprima por
    consola un patrón en forma de "Z" utilizando el carácter asterisco ('*'). La altura
    y el ancho del "Z" deben estar determinados por el valor de n.
*/

#include<iostream>
using namespace std;

void dibujarPatron(int x){

    int i, j;
    for(i=1;i<=x;i++){
        cout<<"*";
    }
    cout<<endl;
    for(i=x-2;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<<" ";
        }
        cout<<"*";
        cout<<endl;
    }

    for(i=1;i<=x;i++){
        cout<<"*";
    }

}

int main(){
    
    int n;
    
    do{
        cout<<"Escriba un numero entero impar mayor a 3: ";
        cin>>n;
    }while((n<3)||(n%2==0));

    dibujarPatron(n);
    
    return 0;
}