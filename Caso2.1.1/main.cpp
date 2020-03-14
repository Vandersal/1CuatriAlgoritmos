#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int menuInternet();
void diaSemana();
void paqueteInternet(int opcion);
void dConectados(int validacion, int dispositivos);
void pedirDispoMB(int dispositivos);
void dispositivosConectados(int verificacion, int opcionInternet);

int main() {
    int opcionInternet;
    do{
        opcionInternet=menuInternet();;
    }while(opcionInternet!=3);
    return 0;
}
int menuInternet(){
    int opcionInternet;
    int verificacion;
    cout<<"\nQue paquete tiene el cliente?"<<endl;
    cout<<"1. Internet en casa (5 Mbps)"<<endl;
    cout<<"2. Internet en casa (10 Mbps)"<<endl;
    cout<<"3. Salir"<<endl;
    cout<<"Opcion: ";
    cin>>opcionInternet;

    switch (opcionInternet){
        case 1: dispositivosConectados(verificacion, opcionInternet);
            break;
        case 2: dispositivosConectados(verificacion, opcionInternet);
            break;
        case 3: cout<<"Adios"<<endl;
            break;
        default: cout<<"Opcion invalida"<<endl;
            break;
    }

    return opcionInternet;
}
void dispositivosConectados(int verificacion, int opcionInternet){
    cout<<"\nConoce cuantos dispositivos se encuentran concectados? (1 = SI y 2 = NO)"<<endl;
    cout<<"Opcion: ";
    cin>>verificacion;
    if (verificacion == 1){
        paqueteInternet(opcionInternet);
    }else if (verificacion == 2){
        diaSemana();
    } else{
        cout<<"Dato invalido"<<endl;
    }
}

void diaSemana(){
    srand(time(NULL));
    int diaMes = rand()%30;
    string arreglo[5] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes"};
    cout<<"Se le agendara una cita el dia: "<<arreglo[rand()%5]<<" "<<diaMes<<endl;
}

void paqueteInternet(int opcion){
    int dispo;
    if(opcion == 1){
        cout<<"Cuantos dispositivos se encuentran conectados?"<<endl;
        cin>>dispo;
        dConectados(opcion, dispo);
    }else if (opcion == 2){
        cout<<"Cuantos dispositivos se encuentran conectados?"<<endl;
        cin>>dispo;
        dConectados(opcion, dispo);
    }else if (opcion <0){
        cout<<"Error en el dato"<<endl;
    }
}

void dConectados(int validacion, int dispositivos){
    if (validacion == 1){
        if (dispositivos >2){
            cout<<"Excedes los dispositivos conectados"<<endl;
        } else if(dispositivos <3 && dispositivos>0){
            pedirDispoMB(dispositivos);
        }
    } else if (validacion == 2){
        if(dispositivos > 5){
            cout<<"Excedes los dispositivos conectados"<<endl;
        }else if(dispositivos <6 && dispositivos>0){
            pedirDispoMB(dispositivos);
        }
    } else{
        cout<<"Error"<<endl;
    }
}

void pedirDispoMB(int dispositivos){
    int consumo;
    int resultado;
    cout<<"Por favor, ingresa la cantidad aproximada de datos consumidos por cada usuario"<<endl;
    for (int i = 0; i <dispositivos ; ++i) {
        cout<<"Dispositivo "<<i+1<<" : ";
        cin>>consumo;
        cout<<" "<<endl;
        resultado = consumo + consumo;
    }
    cout<<"El consumo total de MB es: "<<resultado<<endl;
}