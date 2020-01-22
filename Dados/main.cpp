#include <iostream>

using namespace std;

void solicitarDatos();
void verificarPuntos();
void sumaPuntos();
void tirarDados();


int D1, D2, Tirada;
int contadorPuntos;

int main() {
    solicitarDatos();
    tirarDados();
    return 0;
}

void solicitarDatos(){
    cout<<"Ingresa la cantidad de puntos del dado (recuerda que cada punto es de 1 a 6)"<<endl;
    cout<<"Punto 1:";
    cin>>D1;
    cout<<"Punto 2:";
    cin>>D2;
    verificarPuntos();
}
void verificarPuntos(){
    if (D1 >= 1 && D1 <=6){
        if(D2 >= 1 && D2 <= 6){
            sumaPuntos();
        }
        else{
            cout<<"Error, excedes el numero de puntos negros"<<endl;
        }
    } else{
        cout<<"Error, excedes el numero de puntos negros"<<endl;
    }
}

void sumaPuntos(){
    Tirada = D1 + D2;
    cout<<"Tu tirada da: "<<Tirada<<endl;
}

void tirarDados(){
    do{
        sumaPuntos();
        if(Tirada == 7 | Tirada == 11){
            cout<<"Has ganado"<<endl;
            break;
        } else {
            if(Tirada == 4 | Tirada == 5 | Tirada == 6 | Tirada == 8 | Tirada == 9 |Tirada == 9 | Tirada == 10){
                contadorPuntos = contadorPuntos + 1;
                cout<<"Tu puntaje hasta ahora es: "<<contadorPuntos<<endl;
            }
        }
        solicitarDatos();
    }while(Tirada == 0 | Tirada == 3 | Tirada == 12);
}