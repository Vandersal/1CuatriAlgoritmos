#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int numero, x;

void generarAleatorio(){
    srand(time(NULL));

    for (x = 0; x < 6; ++x) {
        numero = rand()%6;
        cout<<"Aleatorio entre 0 a 6: "<<numero<<endl;
        x = numero;
    }
    cout<<"Salio un: "<<x;

}

int main() {
    generarAleatorio();


    return 0;
}