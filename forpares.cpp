#include <iostream>
using namespace std;
 
int main(){
    int numero=0;
    cout<<"ingrese un numero entero";
    cin>>numero;

    for (int i=2; i<numero; i=i+2)
    {
        cout<<i<<endl;
    }
}
