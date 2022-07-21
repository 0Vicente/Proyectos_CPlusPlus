#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char** argv) {
inicio:
cout<<"Calculo de Circunferencia "<< endl<< endl;
	float a,b;
	const float pi=3.1416f;
	cout<<"Ingrese el valor del Radio: "; cin>>a;
	b=pi*(pow(a,2));
	cout<<"El area de la Circunferencia es: "<< b<< endl<<endl;
goto inicio;
	return 0;}


