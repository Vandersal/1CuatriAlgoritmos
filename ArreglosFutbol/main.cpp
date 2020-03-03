#include <iostream>

int equipos[2];

void pedirDatos();
void restricciones(int valor);
int ganador();

using namespace std;
int main() {
    pedirDatos();
    return 0;
}

void pedirDatos(){
    int partidos, partidosGanados, partidosPerdidos, partidosEmpatados, equipoGanador;
    int contador = 0;

    while(contador < 2) {
        cout<<"Ingresa los puntos del equipo "<<contador+1<<" :"<<endl;

        cout<<"Partidos ganados ";
        cin>>partidosGanados;
        if(partidosGanados <= 0){
            cout<<"Datos invalidos"<<endl;
        }
        cout<<"\nPartidos pedidos ";
        cin>>partidosPerdidos;
        if(partidosPerdidos <= 0){
            cout<<"Datos invalidos"<<endl;
        }
        cout<<"\nPartidos empatados ";
        cin>>partidosEmpatados;
        if(partidosEmpatados <= 0){
            cout<<"Datos invalidos"<<endl;
        }
        partidos = partidosGanados + partidosEmpatados + partidosPerdidos;
        contador++;

        if (partidos == 17){
            cout<<"Datos guardados correctamente"<<endl;
        } else{
            restricciones(partidos);
            contador = contador -1;
        }
        equipos[contador]= (partidosGanados*3) + partidosEmpatados + partidosPerdidos;
    }
    cout<<"\nPuntos equipo 1: "<<equipos[1]<<endl;
    cout<<"Puntos equipo 2: "<<equipos[2]<<endl;

    equipoGanador = ganador();
    if (equipoGanador == 0){
        cout<<"Hubo un empate"<<endl;
    }

}

void restricciones(int valor){
    if (valor != 17) {
        cout << "Valor invalido "<<endl;
    }

}

int ganador(){
    int empate = 0;
    if (equipos[1] > equipos[2]){
        cout<<"Equipo 1 con "<<equipos[1]<<" puntos gana"<<endl;
        return equipos[1];
    } else if (equipos[2] > equipos[1]){
        cout<<"Equipo 2 con "<<equipos[2]<<" puntos gana"<<endl;
        return equipos[2];
    } else{
        return empate;
    }
}