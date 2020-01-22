#include <iostream>
#include <cmath>

using namespace std;
int main() {
    int p, q, resultado;
    cout<<"Ingresar valores para P y Q"<<endl;
    cout<<"P: ";
    cin>>p;
    cout<<"Q: ";
    cin>>q;
    resultado = (pow(p, 3) + pow(q, 4)) - (2 *pow (p,2));

	if(resultado < 680){
        cout<<"Es menor"<<endl;
    }
	else{
    	cout<<"Es mayor"<<endl;
	}
    
    return 0;
}
