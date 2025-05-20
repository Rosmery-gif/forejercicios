#include <iostream>
using namespace std;

int main(){

    int numero=0, primo=1, modulo=0;

    cout<<"ingrese un numero entero";
    cin>>numero;

    for (int i=numero-1; i>=2; numero=numero-1)
    {
        modulo= numero%1;

        if(modulo == 0){
            cout<<"no es primo";
            primo =0;

             break;
        }

    
       
    }
    if(primo == 1){
        cout<<"Es primo";
    }

    





}