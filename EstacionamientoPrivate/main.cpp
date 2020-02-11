#include <iostream>

int menu();
int espaciosCero();
int asignarEspacio();
int mostrarEspacios();


using namespace std;

int main() {

    int opcion;
    int arreglo[10];

    do{
        opcion = menu();
    }while(opcion >0 && opcion<4);

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
            //liberarEspacio();
            break;
        case 3:
            //mostrarEspacios();
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

int espaciosCero(){

    int arreglo[10];

    for (int i = 0; i <10; ++i) {
        arreglo[i] = 0;
        return arreglo[i];
    }

}




