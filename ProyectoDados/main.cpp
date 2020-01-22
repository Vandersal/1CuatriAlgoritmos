#include <iostream>

using namespace std;

//Funciones
void solicitarDatos();
void verificadorDados();
void tirada();
//Variables
int dado1, dado2, resultadoTirada;
int contadorPuntos;

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
            resultadoTirada = dado1 + dado2;
            tirada();
        } else{
            cout<<"Error, excede el tamaño del dado"<<endl;
        }
    } else{
        cout<<"Error, excede el tamaño del dado"<<endl;
    }

}
void tirada(){

    while(resultadoTirada == 4 | resultadoTirada == 5 | resultadoTirada == 6 | resultadoTirada == 8 | resultadoTirada == 9 | resultadoTirada == 10){

        cout<<"Felicidades, sumas 1 punto a tu puntaje "<<endl;
        contadorPuntos++;
        cout<<"Tu puntaje ahora es: "<<contadorPuntos<<" !!"<<endl;
        solicitarDatos();
    }
    if (resultadoTirada == 7 | resultadoTirada == 11){
        cout<<"Felicidades, has ganado"<<endl;

    } else if(resultadoTirada == 2 | resultadoTirada == 3 | resultadoTirada == 5 | resultadoTirada == 12){
        cout<<"Lo sentimos, perdiste :c"<<endl;
    }

}