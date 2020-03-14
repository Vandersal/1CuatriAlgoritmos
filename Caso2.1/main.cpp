#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;


int menu();
int menuInternet();
int limiteDispositivos(int dispositivosConectados);
void diaSemana();
void limiteGB();
int paqueteInternet();
int dispositivosConectados();

int main() {
    int opcion;
    do{
        opcion=menu();
    }while(opcion!=3);
    return 0;
}

void diaSemana(){
    srand(time(NULL));
    int diaMes = rand()%30;
    string arreglo[5] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes"};
    cout<<"Se le agendara una cita el dia: "<<arreglo[rand()%5]<<" "<<diaMes<<endl;
}

int menu(){
    int opcion;
    int opcionInternet;
    cout << "\n-----        -----" << endl;
    cout << "Bienvenido al cliente para soporte" << endl;
    cout << "1. Telefonia" << endl;
    cout << "2. Internet" << endl;
    cout << "3. Salir" << endl;
    cout << "Por favor ingresa tu opcion deseada " << endl;
    cout << "Opcion: ";
    cin >> opcion;
    cout << "\n";
    switch (opcion){
        case 1:
            cout<<"Opcion de telefonia"<<endl;
            break;
        case 2:
            do{
                opcionInternet=menuInternet();;
            }while(opcionInternet!=3);
            break;
        case 3:
            cout<<"Adios"<<endl;
            break;
        default:
            cout<<"Error, opcion no valida para el proceso :("<<endl;
            break;
    }
    return opcion;
}
int menuInternet(){
    int opcionInternet;
    cout<<"\nEl cliente tiene problemas con el internet"<<endl;
    cout<<"Que paquete tiene el cliente?"<<endl;
    cout<<"1. Internet en casa (5 Mbps)"<<endl;
    cout<<"2. Internet en casa (10 Mbps)"<<endl;
    cout<<"3. Regresar"<<endl;
    cout<<"Opcion: ";
    cin>>opcionInternet;

    switch (opcionInternet){
        case 1:
            cout<<"Entro al 1"<<endl;
            limiteGB();
            break;
        case 2:
            cout<<"Entro al 2"<<endl;
            limiteGB();
            break;
        case 3:
            cout<<"Regresa"<<endl;
            break;
        default:
            cout<<"Opcion invalida"<<endl;
            break;
    }

    return opcionInternet;
}

int paqueteInternet(){
    int opcionDispo;
    int opcionGB;
    int dispositivos;
    cout<<"\nConoce cuantos dispositivos se encuentran concectados? (1 = SI y 2 = NO)"<<endl;
    cout<<"Opcion: ";
    cin>>opcionDispo;
    cout<<"\nConoce el consumo de datos? (1 = SI y 2 = NO)"<<endl;
    cout<<"Opcion: ";
    cin>>opcionGB;

    if(opcionDispo <1 && opcionGB < 1){
        cout<<"Datos invalidos"<<endl;
        menuInternet();
    }else {

        if (opcionDispo < 1 || opcionGB < 1) {
            cout << "Datos invalidos" << endl;
            menuInternet();
        } else {
            if (opcionDispo == 1) {
                cout<<"Cuantos dispositivos se encuentran conectados a la red?";
                cin>>dispositivos;
                limiteDispositivos(dispositivos);
            }
            if (opcionGB == 1) {
                //limiteGB();
            }
            if (opcionDispo == 2 && opcionGB == 2) {
                diaSemana();
            }
        }
    }
    return opcionDispo;
}

int limiteDispositivos(int dispositivosConectados){
    if (dispositivosConectados <0){
        cout<<"Error, opcion no valida"<<endl;
        menuInternet();
    }else {

        if(dispositivosConectados < 3){
            cout<<"El usuario no excede la cantidad de dispositivos"<<endl;

        } else if (dispositivosConectados < 6){
            cout<<"El usuario no excede la cantidad de dispositivos"<<endl;
        }
        else {
            cout<<"El usuario tiene mas de los dispositivos permitidos "<<endl;
        }
    }
}

void limiteGB(){
    int consumoGB;
    int opcionDispo;
    int dispositivosConectados;
    opcionDispo = paqueteInternet();
    if(opcionDispo ==2){

    } else{
        cout<<"De cuanto es tu consumo de GB de datos?"<<endl;
        cout<<"Consumo: ";
        cin>>consumoGB;

        if (consumoGB < 0){
            cout<<"Error, dato invalido"<<endl;
            menuInternet();
        }else if (consumoGB < 100){
            cout<<"No has llegado al limite de conexiones permitidas, excelente"<<endl;
            diaSemana();
        }
        else{
            if(opcionDispo != 2){
                cout<<"Tu velocidad bajo a 0.5 Mbps"<<endl;
                cout<<"Por eso tu servicio falla, gracias por contacar al soporte tecnico"<<endl;
            }else{
                cout<<"Tu velocidad bajo a 0.5 Mbps"<<endl;
                /*cout<<"Por favor, ingresa la cantidad aproximada de datos consumidos por cada usuario"<<endl;
                for (int i = 1; i <=dispositivosConectados ; ++i) {
                    cout<<"Dispositivo "<<i<<" : ";
                    cin>>cantidadUsuarios;
                    cout<<" "<<endl;
                    sumaDatos = cantidadUsuarios + cantidadUsuarios;*/
            }
            //cout<<"Tu consumo total de GB considerando que excedes el limite es de: "<<sumaDatos<<endl;
            //cout<<"Gracias por llamar al soporte"<<endl;
        }

    }

}
