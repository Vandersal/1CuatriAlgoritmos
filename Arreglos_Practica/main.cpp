#include <iostream>

using namespace std;

int arreglo[5];

int comparador(int arreglo[5]);
void imprimirArreglo();
void menu();
void llenadoArreglo();

int main(){
    llenadoArreglo();
    imprimirArreglo();
    return 0;
}

void menu(){

}

void llenadoArreglo(){
    int contador = 0;

    cout<<"Llenado del arreglo "<<endl;
    while (contador < 5){
        cout<<"Edad: "<< contador+1<<" :"<<endl;
        cin>>arreglo[contador];

        comparador(arreglo);

        contador++;
    }
}

int comparador(int arreglo[5]){

    for (int i = 0; i < 5; ++i) {
        if(arreglo[i] < 0 ){
            cout<<"Vuelve a ingresar tu dato"<<endl;
            cout<<"Edad: "<< i+1<<" :"<<endl;
            cin>>arreglo[i];

        } else if (arreglo[i] >90){
            cout<<"Vuelve a ingresar tu dato"<<endl;
            cout<<"Edad: "<< i+1<<" :"<<endl;
            cin>>arreglo[i];
        }

    }

}

void imprimirArreglo(){
    for (int i = 0; i < 5; ++i) {
        cout<<"Edad :"<<i+1<<" "<<arreglo[i]<<endl;
    }
}