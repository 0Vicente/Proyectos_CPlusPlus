#include <iostream>
using namespace std;
	struct Datos_personales {
	string Nombre;
	string Apellido;
	string Telefono;
	string Direccion;
	string Sexo;
	string Correo;	
	}Estudiante1, Estudiante2, Estudiante3;

int main(int argc, char** argv) {

cout<< "Plantilla"<< endl<<endl;

cout<<"Introduzca el nombre del Estudiante 1: ";
 getline(cin,Estudiante1.Nombre);
 cout<<"Introduzca el apellido del Estudiante 1: ";
 getline(cin,Estudiante1.Apellido);
 cout<<"Introduzca el telefono del Estudiante 1: ";
 getline(cin,Estudiante1.Telefono);
 cout<<"Introduzca el direccion del Estudiante 1: ";
 getline(cin,Estudiante1.Direccion);
cout<<"Introduzca el sexo del Estudiante 1: ";
 getline(cin,Estudiante1.Sexo);
 cout<<"Introduzca el correo del Estudiante 1: ";
 getline(cin,Estudiante1.Correo);
 
cout<<endl;
 
 cout<<"Introduzca el nombre del Estudiante 2: ";
 getline(cin,Estudiante2.Nombre);
 cout<<"Introduzca el apellido del Estudiante 2: ";
 getline(cin,Estudiante2.Apellido);
 cout<<"Introduzca el telefono del Estudiante 2: ";
 getline(cin,Estudiante2.Telefono);
 cout<<"Introduzca el direccion del Estudiante 2: ";
 getline(cin,Estudiante2.Direccion);
cout<<"Introduzca el sexo del Estudiante 2: ";
 getline(cin,Estudiante2.Sexo);
 cout<<"Introduzca el correo del Estudiante 2: ";
 getline(cin,Estudiante2.Correo);

cout<<endl;
 
 cout<<"Introduzca el nombre del Estudiante 3: ";
 getline(cin,Estudiante3.Nombre);
 cout<<"Introduzca el apellido del Estudiante 3: ";
 getline(cin,Estudiante3.Apellido);
 cout<<"Introduzca el telefono del Estudiante 3: ";
 getline(cin,Estudiante3.Telefono);
 cout<<"Introduzca el direccion del Estudiante 3: ";
 getline(cin,Estudiante3.Direccion);
cout<<"Introduzca el sexo del Estudiante 3: ";
 getline(cin,Estudiante3.Sexo);
 cout<<"Introduzca el correo del Estudiante 3: ";
 getline(cin,Estudiante3.Correo);
 
cout<<endl;

cout<<"Datos del Estudiante 1"<<endl<<endl;
cout<<"Nombre   : "<<Estudiante1.Nombre<<endl;
cout<<"Apellido : "<<Estudiante1.Apellido<<endl;
cout<<"Telefono : "<<Estudiante1.Telefono<<endl;
cout<<"Direccion: "<<Estudiante1.Direccion<<endl;
cout<<"Sexo     : "<<Estudiante1.Sexo<<endl;
cout<<"Correo   : "<<Estudiante1.Correo<<endl;

cout<<endl;

cout<<"Datos del Estudiante 2"<<endl<<endl;
cout<<"Nombre   : "<<Estudiante2.Nombre<<endl;
cout<<"Apellido : "<<Estudiante2.Apellido<<endl;
cout<<"Telefono : "<<Estudiante2.Telefono<<endl;
cout<<"Direccion: "<<Estudiante2.Direccion<<endl;
cout<<"Sexo     : "<<Estudiante2.Sexo<<endl;
cout<<"Correo   : "<<Estudiante2.Correo<<endl;

cout<<endl;

cout<<"Datos del Estudiante 3 "<<endl<<endl;
cout<<"Nombre   : "<<Estudiante3.Nombre<<endl;
cout<<"Apellido : "<<Estudiante3.Apellido<<endl;
cout<<"Telefono : "<<Estudiante3.Telefono<<endl;
cout<<"Direccion: "<<Estudiante3.Direccion<<endl;
cout<<"Sexo     : "<<Estudiante3.Sexo<<endl;
cout<<"Correo   : "<<Estudiante3.Correo<<endl;


	return 0;
}

