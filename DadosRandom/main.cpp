#include <iostream>
#include <stdlib.h>
#include <time.h>

using  namespace std;

void dadosRand();
void sumarPuntos();
void tirarDados();

int dado1, dado2, Tirada;
int contadorPuntos;

int main() {
    dadosRand();
    return 0;
}

void dadosRand(){
    srand(time(NULL));
    dado1 = 1 + rand() % (7-1);
    dado2 = 1 + rand() % (7-1);
    sumarPuntos();
    tirarDados();
}

void sumarPuntos(){
    Tirada = dado1 + dado2;
    cout<<"Tu tirada da: " <<Tirada<<endl;

}

void tirarDados(){
    do{
        sumarPuntos();
        if(Tirada == 7 | Tirada == 11){
            cout<<"Has ganado"<<endl;
            break;
        } else {
            if(Tirada == 4 | Tirada == 5 | Tirada == 6 | Tirada == 8 | Tirada == 9 |Tirada == 9 | Tirada == 10){
                contadorPuntos = contadorPuntos + 1;
                cout<<"Tu puntaje hasta ahora es: "<<contadorPuntos<<endl;
            }
        }
        dadosRand();
    }while(Tirada == 0 | Tirada == 3 | Tirada == 12);
}