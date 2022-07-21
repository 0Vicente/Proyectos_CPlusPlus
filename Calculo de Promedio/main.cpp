#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	inicio:
 string nombre, matricula;
	float a,b,c,d, resultado;
	cout<<endl<<"Calculadora de Promedio Cuatrimestral"<< endl;
	cout<<"Ingrese Su Nombre: "; cin>>nombre;
	cout<<"Ingrese Su Matricula: "; cin>>matricula;
	cout<<"Ingrese La nota del No.1: "; cin>>a;
	cout<<"Ingrese La nota del No.2: "; cin>>b;
	cout<<"Ingrese La nota del No.3: "; cin>>c;
	cout<<"Ingrese La nota del No.4: "; cin>>d;
	resultado=(a+b+c+d)/4;
	cout<<nombre<<" "<<matricula <<" su nota promedio es: "<< resultado;
	cout<<endl; 		
	goto inicio;
	return 0;
}
