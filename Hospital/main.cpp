#include <iostream>

using namespace std;

int edad, enfermedad, opcionServicio;
int gastoTotalDia, gastoTotal, gastoEnfermedad, dias, diaServicio, gastoServicio;
int cuenta;
string nombrePaciente;

void datosPaciente();
void verificadorEdad();
void tipoEnfermedad();
void servicioAdicional();

int main() {
    datosPaciente();
    return 0;
}

void datosPaciente(){
    cout<<"----------";
    cout<<"\n Bienvenido";
    cout<<"\nPor favor ingresa el nombre del paciente: ";
    cin>>nombrePaciente;
    cout<<"\nIngresa la edad del paciente: ";
    cin>>edad;
    cout<<"\nIngresa el total de dias que estuvo el paciente: ";
    cin>>dias;
    verificadorEdad();
}

void verificadorEdad(){

    if(edad < 0){
        cout<<"Error, edad invalida"<<endl;
    }
    else{

        if (edad <= 90){
            cout<<""<<endl;
            if (dias < 0){
                cout<<"Error, dias invalidos"<<endl;
            }else{
                tipoEnfermedad();
            }

        }
        else{
            cout<<"Error, tu paciente no puede existir "<<endl;
        }

    }


}

void tipoEnfermedad(){
    cout<<"Que tipo de enfermedad tiene el paciente?"<<endl;
    cout<<"1. Gripa"<<endl;//Costo dia es de 2500
    cout<<"2. Gastritis"<<endl;//Costo dia es de 1600
    cout<<"3. Neumonia"<<endl;//Costo dia es de 1000
    cout<<"Enfermad: ";
    cin>>enfermedad;
    switch (enfermedad){
        case 1:
            cout<<"\nTu paciente tiene gripa :c"<<endl;
            gastoEnfermedad = 2500;
            servicioAdicional();

            break;
        case 2:
            cout<<"Tu paciente tiene gastritis"<<endl;
            if(edad <= 12){//En caso de que el paciente tenga menos de 12 anios
                gastoEnfermedad = 1600 + 200;
                servicioAdicional();
            }else {
                gastoEnfermedad = 1600;
                servicioAdicional();
            }

            break;
        case 3:
            cout<<"Tu paciente tiene neumomina"<<endl;
            if(edad <= 12){//En caso de que el paciente tenga menos de 12 anios
                gastoEnfermedad = 1000 + 200;
                servicioAdicional();
            }else {
                gastoEnfermedad = 1000;
                servicioAdicional();
            }

            break;
        default:
            cout<<"Error, enfermedad no valida"<<endl;
            break;
    }
}

void servicioAdicional(){
    cout<<"Que tipo de servicio adicional tiene el paciente?"<<endl;
    cout<<"1. Examen de laboratorio"<<endl;//Costo dia es de 150 pesos
    cout<<"2. Atencion especial"<<endl;//Costo dia es de 200 pesos
    cout<<"3. Consulta externa(Otro medico) "<<endl;//Costo dia es de 500 pesos
    cout<<"4. Ningun servicio"<<endl;
    cout<<"Servicio: ";
    cin>>opcionServicio;

    switch (opcionServicio){

        case 1:
            cout<<"\nTu paciente tuvo examen de laboratorio :c"<<endl;
            cout<<"Por cuantos dias tuvo el servicio? ";
            cin>>diaServicio;
            if(diaServicio < 0 ){
                cout<<"Error, dias invalidos"<<endl;
            }else {
                if(diaServicio <= dias) {
                    gastoServicio = 150 * diaServicio;
                    gastoTotal = gastoEnfermedad * dias;
                    cuenta = gastoTotal + gastoServicio;
                    cout << "El costo total a pagar por dia sin servicios extra es: " << gastoEnfermedad << " pesos :)"
                         << endl;
                    cout << "El costo total a pagar es: " << cuenta << " pesos :)" << endl;

                }else{
                    cout<<"Los dias no tienen coherencia"<<endl;
                }
            }

            break;
        case 2:
            cout<<"\nTu paciente tuvo atencion especial :c"<<endl;
            cout<<"Por cuantos dias tuvo el servicio? ";
            cin>>diaServicio;
            if(diaServicio < 0 ){
                cout<<"Error, dias invalidos"<<endl;
            }else {
                if(diaServicio <= dias) {
                    gastoServicio = 200 * diaServicio;
                    gastoTotal = gastoEnfermedad * dias;
                    cuenta = gastoTotal + gastoServicio;
                    cout << "El costo total a pagar por dia sin servicios extra es: " << gastoEnfermedad << " pesos :)"
                         << endl;
                    cout << "El costo total a pagar es: " << cuenta << " pesos :)" << endl;

                }else{
                    cout<<"Los dias no tienen coherencia"<<endl;
                }
            }

            break;
        case 3:
            cout<<"\nTu paciente tuvo consulta medica externa :c"<<endl;
            cout<<"Por cuantos dias tuvo el servicio? ";
            cin>>diaServicio;
            if(diaServicio < 0 ){
                cout<<"Error, dias invalidos"<<endl;
            }else {
                if(diaServicio <= dias) {
                    gastoServicio = 500 * diaServicio;
                    gastoTotal = gastoEnfermedad * dias;
                    cuenta = gastoTotal + gastoServicio;
                    cout << "El costo total a pagar por dia sin servicios extra es: " << gastoEnfermedad << " pesos :)"
                         << endl;
                    cout << "El costo total a pagar es: " << cuenta << " pesos :)" << endl;

                }else{
                    cout<<"Los dias no tienen coherencia"<<endl;
                }
            }

            break;
        case 4:
            gastoTotalDia = gastoEnfermedad;
            cuenta = gastoTotalDia * dias;
            cout<<"El costo total a pagar por dia es: "<<gastoTotalDia<<" pesos :)"<<endl;
            cout<<"El costo total a pagar es: "<<cuenta<<" pesos :)"<<endl;

            break;
        default:
            cout<<"Error, servicio no valido"<<endl;
            cout<<"El costo total a pagar es: "<<gastoTotal<<" pesos :)"<<endl;

            break;
    }
}