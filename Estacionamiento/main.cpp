#include <iostream>


int espacio[10];

int menu();
void espaciosCero();
void mostrarEspacios();
void asignarEspacio();
void liberarEspacio();
int verificarEspacio(int numero);

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
    int indicador;

   do{
       mostrarEspacios();
       cout<<"Ingrese el espacio deseado: ";
       cin>>espacioEstacionamiento;

   }while(espacioEstacionamiento <0 || espacioEstacionamiento>10);
   indicador = verificarEspacio(espacioEstacionamiento);
   if(indicador == 1){
       espacio[espacioEstacionamiento -1] = 1;
   }else{
       cout<<"Ya esta ocupado"<<endl;
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
    for (int i = 0; i <10; ++i) {
        if(espacio[i] == 0){
            cout<<"Se cuenta con el espacio "<<i+1<<endl;
        } else{
            cout<<"Espacio "<<i+1<<" se encuentra ocupado "<<endl;
        }
    }
    cout<<"\n";
}

int verificarEspacio(int numero){
    int indicador = 2; //1= disponible 2- No disponible
        if(espacio[numero -1] == 0){
            cout<<"Disponible"<<endl;
            indicador = 1;
        }
    return indicador;
}