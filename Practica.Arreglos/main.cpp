#include <iostream>

int menu();

int verificador();
int arreglo[5];


using namespace std;
int main(){

    int opcion;

    do{
    opcion = menu();
    }while(opcion > 0 && opcion<4);


    return 0;
}

int menu(){
    int opcionMenu;

    cout<<"1.Mostrar todas las edades "<<endl;
    cout<<"2.Buscar edad"<<endl;
    cout<<"3.Mostrar edad almacenada"<<endl;
    cout<<"4.Salir"<<endl;
    cout<<"Opcion: ";
    cin>>opcionMenu;

    switch (opcionMenu){
        case 1:
            cout<<"\n";

            break;
        case 2:
            cout<<"\n";

            break;
        case 3:

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

}
int verificador(){

    if (arreglo[contador] <= 0 || arreglo[contador] >90){
        cout<<"Error, por favor, vuelve a ingresar una edad "<<endl;
        cout<<"Edad "<<contador+1<<": ";
        cin>>arreglo[contador];
    }
}

