#include <iostream>

using namespace std;

int espacio[10];
int numero;

void verificadorEspacios();
void asignarEspacio();
void verificarOcupado();
void liberarEspacio();


int main() {

    for (int i = 0; i <10 ; ++i) {
        espacio[i] = 0;

    }
    retornoInicio();
    verificadorEspacios();
    asignarEspacio();
    verificarOcupado();
    liberarEspacio();



    return 0;
}


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

    if(espacio[numero -1] == 1){
        cout<<"Espacio ocupado"<<endl;
        retornoInicio();
    }
    espacio[numero-1] = 1;


}

void verificarOcupado(){
    for (int i = 0; i < 10; ++i) {
        if (espacio[i] == 1){
            cout<<"El espacio "<<i+1<<" se encuentra ocupado"<<endl;
        }
    }
}

void liberarEspacio(){
    int opcion;
    cout<<"Desea liberar el espacio? (Si == 1, No == 2)"<<endl;
    cout<<"Opcion: ";
    cin>>opcion;
    if (opcion == 1 || opcion == 2){

        if(opcion == 1){
            espacio[numero -1] = 0;
            cout<<"El espacio "<<numero<<" esta vacio"<<endl;
        }else {
            cout<<"El espacio seguira usandose"<<endl;
            asignarEspacio();
        }

    }else {
        cout<<"Dato invalido"<<endl;
        asignarEspacio();
    }

}
