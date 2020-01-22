#include <iostream>

using namespace std;

//Funciones
void solicitarDatos();
void verificadorDados();
//Variables
int dado1, dado2, resultadoTirada;

int main() {
    solicitarDatos();
    return 0;
}

void solicitarDatos(){
    cout<<"Bienvenido"<<endl;
    cout<<"Por favor, ingresa la cara del dado 1: ";
    cin>>dado1;
    cout<<"\nPor favor, ingresa la cara del dado 2: ";
    cin>>dado2;
    verificadorDados();
}

void verificadorDados(){
    if (dado1 >= 1 && dado1 <=6){
        if (dado2 >= 1 && dado2 <=6){

        } else{
            cout<<"Error, excede el tamaño del dado"<<endl;
        }
    } else{
        cout<<"Error, excede el tamaño del dado"<<endl;
    }

}