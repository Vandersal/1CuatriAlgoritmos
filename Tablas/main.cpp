#include <iostream>

using namespace std;

int numero, contador = 1;

void datosUsuario();
void operacion();


int main() {
    datosUsuario();
    return 0;
}

void datosUsuario(){
    cout<<"Ingresa el numero a hacer su tabla "<<endl;
    cout<<"Opcion: "<<endl;
    cin>>numero;
    operacion();
}

void operacion(){
    if(numero <= 0){
        cout<<"Dato invalido"<<endl;
    } else{
        if(numero%2 == 0){
            while (contador < 11){
                cout<<contador<<" X "<<numero<<" = "<<numero*contador<<endl;
                contador++;
            }
        }
        else{
            cout<<"Numero no par"<<endl;
        }
    }
}