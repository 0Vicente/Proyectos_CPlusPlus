#include <iostream>
#include<math.h>
using namespace std;
int main(int argc, char** argv) {
	float a,b,c;
	cout<<"Ingrese el valor del Cateto Opuesto: "; cin>>a;
	cout<<"Ingrese el valor del cateto Adyacente: "; cin>>b;
	c=sqrt(pow(a,2)+pow(b,2));
	cout<<"El valor de la Hipotenusa es: "<< c;
}

