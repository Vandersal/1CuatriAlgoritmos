#include<iostream>
#include<fstream>


using namespace std;

void iniciarSesion();
bool validarDatos(int cuenta, int nip);
int imprimirComprobante(int saldo, int tipoOperacion, int saldoActualizado);
int consultarSaldo(int saldo);
bool validarCantidad(int cantidad);
int retirarEfectivo(int saldo);
int depositarEfectivo(int saldo);
void Menu(int saldo);




bool validarDatos(int cuenta, int nip){
    bool indicador=false;
    if(cuenta>99999 && cuenta<1000000){
        if(nip>999 && nip<10000){
            indicador=true;
        }
    }
    return indicador;
}
void iniciarSesion(){
    int cuentaCliente=123456, nipCliente=8263 , nip ,cuenta, saldoCliente=1500;
    bool indicador;
    cout<<"Numero de cuenta: ";
    cin>>cuenta;
    cout<<"NIP : ";
    cin>>nip;
    indicador=validarDatos(cuenta,nip);
    if(indicador==true){
        if(cuenta==cuentaCliente && nip==nipCliente){
            Menu(saldoCliente);
        }
        else{
            cout<<"Los datos no coinciden";
        }
    }
    else{
        cout<<"La longitud de los datos es incorrecta";
    }
}
int imprimirComprobante(int saldo, int tipoOperacion, int saldoActualizado){
    ofstream archivoSalida("Comprobante.txt", ios::out );

    if( !archivoSalida ){
        cerr << "No se pudo abrir el archivo"<< endl;
        exit(1);
    }
    archivoSalida <<" MI BANCO\nDireccion: Suchiapa,Chiapas\n";

    switch(tipoOperacion){
        case 1:
            archivoSalida << "Tipo de operacion: Consulta de saldo\nSaldo inicial: "<<saldo;
            break;
        case 2:
            archivoSalida <<"Tipo de operacion: Retiro de efectivo\n";
            archivoSalida <<"Saldo inicial: "<<saldo<<endl<<"Saldo final: "<<saldoActualizado;
            break;
        case 3:
            archivoSalida <<"Tipo de operacion: Deposito de efectivo\n";
            archivoSalida <<"Saldo inicial: "<<saldo<<endl<<"Saldo final: "<<saldoActualizado;
            break;
    }
    return 0;
}
int consultarSaldo(int saldo){
    int accion;
    cout<<"Saldo: "<<saldo<<endl;
    cout<<"1. Imprimir comprobante\n 2. Menu principal\n";
    cin>>accion;
    if(accion==1){
        imprimirComprobante(saldo,1,0);
    }
    return saldo;
}

bool validarCantidad(int cantidad){
    bool indicador=false;
    if(cantidad>0){
        indicador=true;
    }
    return indicador;
}


int retirarEfectivo(int saldo){
    int cantidad, auxiliar;
    bool indicador;
    do{
        cout<<"Cantidad a retirar: ";
        cin>>cantidad;
        indicador=validarCantidad(cantidad);
        if(indicador==true){
            if(cantidad<=saldo){
                auxiliar=saldo;
                saldo=saldo-cantidad;
                imprimirComprobante(auxiliar,2,saldo);
            }
            else{
                cout<<"Corregir, saldo insuficiente";
                indicador=false;
            }
        }
        else{
            cout<<"Corregir, nose permiten negativos";
        }
    }while(indicador!=true);
    return saldo;
}

int depositarEfectivo(int saldo){
    int cantidad, auxiliar;
    bool indicador;
    do{
        cout<<"Cantidad a depositar: ";
        cin>>cantidad;
        indicador=validarCantidad(cantidad);
        if(indicador==true){
            auxiliar=saldo;
            saldo=saldo+cantidad;
            imprimirComprobante(auxiliar,3,saldo);
        }
        else{
            cout<<"Corregir , no se permiten negativos";
        }
    }while(indicador!=true);
    return saldo;
}

void Menu(int saldo){
    int operacion;
    do{
        cout<<"1. Consultar saldo\n2. Retirar efectivo\n3. Depositar efectivo\n4.Salir\n";
        cin>>operacion;
        switch(operacion){
            case 1:
                saldo=consultarSaldo(saldo);
                break;
            case 2:
                saldo=retirarEfectivo(saldo);
                break;
            case 3:
                saldo=depositarEfectivo(saldo);
                break;
            case 4: cout<<"Retirar tu tarjeta";
        }
    }while(operacion!=4);
}

int main(){
    iniciarSesion();
    return 0;
}

