#include <iostream>

using namespace std;
int main(int argc, char** argv) {
	inicio:
		cout<<"Calculo de Valocidad"<< endl<< endl;
	float a,b,c,d;
	cout<<"Distancia recorrida en kilometros: "; cin>>a;
	cout<<"Tiempo trancurrido en segundos: "; cin>>b;
	c=a*1000;
	d=c/b;
	cout<<"La Velocidad es: "<< d<< endl;
	
	goto inicio;
	return 0;
}
