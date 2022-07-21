#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	inicio:
		cout<<endl;
	cout<<"Plantilla"<<endl;	
	string nombre, apellido, telefono, dir, sexo, correo;
	cout<<"Introduzca su Nombre: "; cin>>nombre;
	cout<<"Introduzca su Apellido: "; cin>>apellido;
	cout<<"Introduzca su Telefono: "; cin>>telefono;
	cout<<"Introduzca su Direccion: "; cin>>dir;
	cout<<"Introduzca su Sexo: "; cin>>sexo;
	cout<<"Introduzca su Correo: "; cin>>correo;
	cout<<endl;
	cout<<"Nombre: "<<nombre<<endl<<"Apellido: "<<apellido<<endl<<"Telefono: "<<telefono<<endl<<"Direccion: "<<dir<<endl<<"Sexo: "<<sexo<<endl<<"Correo: "<<correo;
	goto inicio;
	return 0;
}
