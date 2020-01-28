#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int numero;

void generarAleatorio(){
    srand(time(NULL));
    numero = rand()%6;
}

int main() {
    generarAleatorio();
    cout<<"Aleatorio entre 0 a 6: "<<numero<<endl;

    return 0;
}