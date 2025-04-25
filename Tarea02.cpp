/*
    Desarrolla un programa en C++ que tome un entero impar n≥5 como
    entrada e imprima por consola el siguiente patrón utilizando el
    carácter asterisco ('*'). Las dimensiones del patrón deben estar
    basadas en el valor de n.
*/

#include<iostream>
using namespace std;

void dibujarPatron(int x){
    int i, j;

    for(i=1;i<=x;i++){
        if((i>1)&&(i<((x+1)/2))){
            cout<<" ";
        }else{
            cout<<"*";
        }
    }
    cout<<endl;

    for(j=1;j<=((x+1)/2-2);j++){
        for(i=1;i<=(((x+1)/2));i++){
            if((i>1)&&(i<=(((x+1)/2)-1))){
                cout<<" ";
            }else{
                if(i==(((x+1)/2))){
                    cout<<"*";
                    cout<<endl;
                }else{
                    cout<<"*";
                }
            }
        }
    }

    for(i=1;i<=x;i++){
        cout<<"*";
    }
    cout<<endl;

    for(j=1;j<=((x+1)/2-2);j++){
        for(i=1;i<=x;i++){
            if(i>=1&&i<(((x+1)/2))){
                cout<<" ";
            }else{
                if((i>(x+1)/2)&&(i<=x-1)){
                    cout<<" ";
                }else{
                    cout<<"*";
                }
            }
        }
        cout<<endl;
    }

    for(i=1;i<=x;i++){
        if((i>(x+1)/2)&&(i<x)){
            cout<<" ";
        }else{
            cout<<"*";
        }
    }
    
}

int main(){
    
    int n;
    
    do{
        cout<<"Escriba un numero entero impar mayor a 5: ";
        cin>>n;
    }while(n<5 || n%2==0);

    dibujarPatron(n);
    
    return 0;
}