#include <iostream>

using namespace std;

int espacio[10];
int numero;

void verificadorEspacios(){

    for (int i = 0; i <10 ; ++i) {
        if (espacio[i] == 0){
            cout<<"Se cuenta con el espacio "<<i+1<<endl;
        }
    }
}

void asignarEspacio(){
    do {
        cout<<"Indique el numero de espacio a ocupar "<<endl;
        cin>>numero;
    }while(numero <1 || numero > 10);
    espacio[numero-1] = 1;


}

void verificarOcupado(){
    for (int i = 0; i < 10; ++i) {
        if (espacio[i] == 1){
            cout<<"El espacio "<<i+1<<" se encuentra ocupado"<<endl;

        }
    }
}

int main() {

    for (int i = 0; i <10 ; ++i) {
        espacio[i] = 0;

    }
    verificadorEspacios();
    asignarEspacio();
    verificarOcupado();


    return 0;
}
