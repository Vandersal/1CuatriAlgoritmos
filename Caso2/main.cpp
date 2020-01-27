#include <iostream>


using namespace std;

//Variables
int opcionMenuPrincipal;
int opcionInternet, dispositivosConectados, consumoGB, cantidadUsuarios, sumaDatos;
int opcionDispo, opcionGB;



//Constructores de las funciones
void menuPrincipal();
void menuInternet();
void paqueteInternetCasa5GB();
void paqueteInternetCasa10GB();
void limiteDispositivos5GB();
void limiteDispositivos10GB();
void limiteGB();

int main() {
    menuPrincipal();
    return 0;
}

void menuPrincipal(){

    cout << "\n-----        -----" << endl;
    cout << "Bienvenido al cliente para soporte" << endl;
    cout << "1. Telefonia" << endl;
    cout << "2. Internet" << endl;
    cout << "3. Salir" << endl;
    cout << "Por favor ingresa tu opcion deseada " << endl;
    cout << "Opcion: ";
    cin >> opcionMenuPrincipal;
    cout << "\n";
    switch (opcionMenuPrincipal){
        case 1:
            cout<<"Opcion de telefonia"<<endl;
            break;
        case 2:
            menuInternet();
            break;
        case 3:
            cout<<"Adios"<<endl;
        default:
            cout<<"Error, opcion no valida para el proceso :("<<endl;
            break;
    }

}

void menuInternet(){
    cout<<"\nEl cliente tiene problemas con el internet"<<endl;
    cout<<"Que paquete tiene el cliente?"<<endl;
    cout<<"1. Internet en casa (5 Mbps)"<<endl;
    cout<<"2. Internet en casa (10 Mbps)"<<endl;
    cout<<"3. Regresar"<<endl;
    cout<<"Opcion: ";
    cin>>opcionInternet;

    switch (opcionInternet){
        case 1:
            paqueteInternetCasa5GB();
            break;
        case 2:
            paqueteInternetCasa10GB();
            break;
        case 3:
            menuPrincipal();
            break;
        default:
            cout<<"Opcion invalida"<<endl;
            break;
    }
    cout<<"\n";

}

void paqueteInternetCasa5GB(){
    cout<<"\nConoce cuantos dispositivos se encuentran concectados? (1 = SI y 2 = NO)"<<endl;
    cout<<"Opcion: ";
    cin>>opcionDispo;
    cout<<"\nConoce el consumo de datos? (1 = SI y 2 = NO)"<<endl;
    cout<<"Opcion: ";
    cin>>opcionGB;

    if(opcionDispo <0 && opcionGB < 0){
        cout<<"Datos invalidos"<<endl;
        menuInternet();
    }else{

        if(opcionDispo < 0 || opcionGB <0 ){
            cout<<"Datos invalidos"<<endl;
            menuInternet();
        }else{
            if(opcionDispo == 1){
                limiteDispositivos5GB();
            }
            if(opcionGB == 1){
                limiteGB();
            }
            if(opcionDispo == 2 && opcionGB == 2){
                cout<<"Se le agendara una cita para que un tecnico visite su domicilio, muchas gracias"<<endl;
            }
        }

    }
}//Funcion terminada

void paqueteInternetCasa10GB(){
    cout<<"\nConoce cuantos dispositivos se encuentran concectados? (1 = SI y 2 = NO)"<<endl;
    cout<<"Opcion: ";
    cin>>opcionDispo;
    cout<<"\nConoce el consumo de datos? (1 = SI y 2 = NO)"<<endl;
    cout<<"Opcion: ";
    cin>>opcionGB;

    if(opcionDispo <0 && opcionGB < 0){
        cout<<"Datos invalidos"<<endl;
        menuInternet();
    }else{

        if(opcionDispo < 0 || opcionGB <0 ){
            cout<<"Datos invalidos"<<endl;
            menuInternet();
        }else{
            if(opcionDispo == 1){
                limiteDispositivos10GB();
            }
            if(opcionGB == 1){
                limiteGB();
            }
            if(opcionDispo == 2 && opcionGB == 2){
                cout<<"Se le agendara una cita para que un tecnico visite su domicilio, muchas gracias"<<endl;
            }
        }

    }
}

void limiteDispositivos5GB(){
    cout<<"\nCuantos dispositivos se encuentran conectados a la red?"<<endl;
    cout<<"Opcion: ";
    cin>>dispositivosConectados;

    if (dispositivosConectados <0){
        cout<<"Error, opcion no valida"<<endl;
        menuInternet();
    }else {

        if(dispositivosConectados < 3){
            cout<<"El usuario no excede la cantidad de dispositivos"<<endl;

        }else {
            cout<<"El usuario tiene mas de los dispositivos permitidos "<<endl;
        }
    }
}//Funcion terminada

void limiteDispositivos10GB(){
    cout<<"\nCuantos dispositivos se encuentran conectados a la red?"<<endl;
    cout<<"Opcion: ";
    cin>>dispositivosConectados;

    if (dispositivosConectados <0){
        cout<<"Error, opcion no valida"<<endl;
        menuInternet();
    }else {

        if(dispositivosConectados < 6){
            cout<<"El usuario no excede la cantidad de dispositivos"<<endl;

        }else {
            cout<<"El usuario tiene mas de los dispositivos permitidos "<<endl;
        }
    }
}

void limiteGB(){
    cout<<"De cuanto es tu consumo de GB de datos?"<<endl;
    cout<<"Consumo: ";
    cin>>consumoGB;

    if (consumoGB < 0){
        cout<<"Error, dato invalido"<<endl;
        menuInternet();
    }else

    if (consumoGB < 100){
        cout<<"No has llegado al limite de conexiones permitidas, excelente"<<endl;
    }
    else{
        if(opcionDispo == 2){
            cout<<"Tu velocidad bajo a 0.5 Mbps"<<endl;
            cout<<"Por eso tu servicio falla, gracias por contacar al soporte tecnico"<<endl;
        }else{
            cout<<"Tu velocidad bajo a 0.5 Mbps"<<endl;
            //Falta codigo, complementalo
            cout<<"Por favor, ingresa la cantidad aproximada de datos consumidos por cada usuario"<<endl;
            for (int i = 1; i <=dispositivosConectados ; ++i) {
                cout<<"Dispositivo "<<i<<" : ";
                cin>>cantidadUsuarios;
                cout<<" "<<endl;
                sumaDatos = cantidadUsuarios + cantidadUsuarios;
            }
            cout<<"Tu consumo total de GB considerando que excedes el limite es de: "<<sumaDatos<<endl;
            cout<<"Gracias por llamar al soporte"<<endl;
        }

    }
}//Funcion terminada

