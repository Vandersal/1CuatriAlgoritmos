#include <iostream>

int espacio[10];

int menu();
void espaciosCero();
void mostrarEspacios();
void asignarEspacio();
void liberarEspacio();
bool verificarEspacio(int numero, int valor);
void validarNumero(int espacioEstacionamiento);

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
    bool respuesta;

    mostrarEspacios();
    cout<<"Ingrese el espacio deseado: ";
    cin>>espacioEstacionamiento;

    validarNumero(espacioEstacionamiento);
    respuesta=verificarEspacio(espacioEstacionamiento, 0);

   if(respuesta == true){
       espacio[espacioEstacionamiento -1] = 1;
   }else{
       cout<<"Ya esta ocupado"<<endl;
   }

}

void liberarEspacio(){
    int lugar;
    cout<<"Indica el espacio a liberar"<<endl;
    mostrarEspacios();
    cin>>lugar;
    validarNumero(lugar);
    espacio[lugar-1] = 0;
}

void mostrarEspacios(){
    cout<<"\n";
    for (int i = 0; i <10; ++i) {
        if(espacio[i] == 0){
            cout<<"Se cuenta con el espacio "<<i+1<<endl;
        } else{
            cout<<"Espacio "<<i+1<<" se encuentra ocupado "<<endl;
        }
    }
    cout<<"\n";
}

bool verificarEspacio(int numero, int valor){
    bool respuesta = false;
        if(espacio[numero -1] == valor){
            respuesta = true;

        }
    return respuesta;
}

void validarNumero(int espacioEstacionamiento){

    while (espacioEstacionamiento <1 || espacioEstacionamiento >10){
        cout << "Ingrese de nuevo" << endl;
        cin >> espacioEstacionamiento;
    }

}