#include <iostream>
using namespace std;

int main(){

    int numero=0, primo=1, modulo;

    cout<<"ingrese un numero entero";
    cin>>numero;

    for (int i=numero-1; i>=2; i=i-1)
    {
        modulo = numero%i;

        if(modulo == 0){
            cout<<"no es primo";
            primo =0;

          break;   
        }
    }
    
       if(primo == 1){
        cout<<"es primo";
    

}

return 0;
}