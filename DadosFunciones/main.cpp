#include <iostream>

using namespace std;

int dado1, dado2, tirada;

void pedirDatos();
void verificarPuntos();
void tirarDados();



int main() {
    pedirDatos();
    return 0;
}

void pedirDatos(){
    cout<<"Ingresa la cantidad de puntos del dado (recuerda que cada punto es de 1 a 6)"<<endl;
    cout<<"Dado 1:";
    cin>>dado1;
    cout<<"Dado 2:";
    cin>>dado2;
    verificarPuntos();
}

void verificarPuntos(){
    if (dado1 >= 1 && dado1 <=6){
        if(dado2 >= 1 && dado2 <= 6){
        tirarDados();
        }
        else{
            cout<<"Error, excedes el numero de puntos negros"<<endl;
        }
    } else{
        cout<<"Error, excedes el numero de puntos negros"<<endl;
    }
}

void tirarDados(){
    do{
        tirada = dado1 + dado2;
        cout<<"Tu tirada da: "<<tirada<<endl;

        if(tirada == 7 | tirada == 11){
            cout<<"Ganaste el juego"<<endl;
        }
    }while(tirada == 2 | tirada == 3 | tirada == 12);
    cout<<"Perdiste :c "<<endl;
}


