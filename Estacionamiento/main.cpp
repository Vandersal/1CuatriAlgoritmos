#include <iostream>


int espacio[10];

int menu();
void espaciosCero();
void mostrarEspacios();
void asignarEspacio();
void liberarEspacio();
void verificarEspacio();

using namespace std;

int main() {
    int opcion;

    espaciosCero();
    do{
        opcion = menu();
    }while(opcion > 0 && opcion<4);

    return 0;
}

int menu(){

    int opcionMenu;

    cout<<"1.Asignar espacio"<<endl;
    cout<<"2.Liberar espacio"<<endl;
    cout<<"3.Mostrar todos los espacios"<<endl;
    cout<<"4.Salir"<<endl;
    cout<<"Opcion: ";
    cin>>opcionMenu;

    switch (opcionMenu){
        case 1:
            cout<<"\n";
            asignarEspacio();
            break;
        case 2:
            cout<<"\n";
            liberarEspacio();
            break;
        case 3:
            mostrarEspacios();
            break;
        case 4:
            cout<<"\n";
            cout<<"Adios :v"<<endl;
            break;
        default:
            cout<<"\n";
            cout<<"Opcion invalida"<<endl;
            break;

    }

    return opcionMenu;

}
void espaciosCero(){
    for (int i = 0; i <10 ; ++i) {
        espacio[i] = 0;

    }
}

void asignarEspacio(){
    int espacioEstacionamiento;
    cout<<"Espacios totales"<<endl;
    verificarEspacio();
    cout<<"Ingrese el espacio deseado: ";
    cin>>espacioEstacionamiento;
    if(espacioEstacionamiento < 0 || espacioEstacionamiento >10){
        cout<<"Error, espacio invalido "<<endl;
        menu();

    } else{

        if(espacio[espacioEstacionamiento -1] == 1){
            cout<<"Error, espacio ocupado"<<endl;
            menu();
        } else{
            espacio[espacioEstacionamiento-1] = 1;
            cout<<"Espacio asginado!!"<<endl;
        }
    }


}

void liberarEspacio(){
    int lugar;
    do{
        cout<<"Indica el espacio a liberar"<<endl;
        mostrarEspacios();
        cin>>lugar;
    }while (lugar <1 || lugar > 10);
    espacio[lugar-1] = 0;
}

void mostrarEspacios(){
    cout<<"\n";
    for (int i = 0; i <10 ; ++i) {
        if (espacio[i] == 1){
            cout<<"Espacio "<<i+1<<" se encuentra ocupado "<<endl;
        }
    }
    cout<<"\n ";
    verificarEspacio();
    cout<<"\n";
}

void verificarEspacio(){
    for (int i = 0; i <10; ++i) {
        if(espacio[i] == 0){
            cout<<"Se cuenta con el espacio "<<i+1<<endl;
        }
    }
}