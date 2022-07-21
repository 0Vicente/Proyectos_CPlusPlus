#include <iostream>
#include <iomanip>
#include<Windows.h>
using namespace std;
int main(int argc, char** argv) {
	float num[8],num1[8];
	float a,j;
	char c,x;
		do{
			do{
	HANDLE h= GetStdHandle( STD_OUTPUT_HANDLE );
	SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_INTENSITY);			
	cout<<endl<<"Programa que esquematiza y copia un arreglo\n"<< endl;
	SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_BLUE| FOREGROUND_RED|FOREGROUND_INTENSITY);	
	cout<<"Ingrese el numero de inicio: "; cin>>a;
	for(int i=0;i<=7;i++){
		if (a<0){
			a=a*-1;
			num[i]=a;
			a++;
		}else{
			num[i]=a;
			a++;
		}
	}
	for(int i=0;i<8;i++){
		num1[i]=num[i];
	}
	SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_INTENSITY);	
	cout<<"\n\nLos Datos del arreglo 1 son: ";
	SetConsoleTextAttribute(h, FOREGROUND_RED |FOREGROUND_INTENSITY);	
	for(int i=0;i<8;i++){
		cout<<"\nPosicion "<<i<<": "<<num[i];
	}
	SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_INTENSITY);	
	cout<<"\n\nLos Datos de la copia son: ";
	SetConsoleTextAttribute(h, FOREGROUND_RED |FOREGROUND_INTENSITY);	
	for(int i=0;i<8;i++){
		cout<<"\nPosicion "<<i<<": "<<num1[i];
	}
	cout<<"\n";
	SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_INTENSITY);	
	cout<<"\n\nLos Datos datos esquematizados son: ";
	SetConsoleTextAttribute(h, FOREGROUND_RED |FOREGROUND_INTENSITY);
		for(int i=0;i<8;i++){
		j=num[i];
		cout<<"|"<<j<<"| ";
		}
	
		SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_BLUE| FOREGROUND_RED|FOREGROUND_INTENSITY);	
Do:
cout<<"\n\nDesea probar de nuevo?(S/N)> "; cin>>x;
if((x!='n')&&(x!='N')&&(x!='s')&&(x!='S')){
	system("Color 4");
	cout<<"Esta no es una respuesta valida";
	goto Do;
}else{	system("Color 7"); system("cls");
}
}while(x!='n');
DO:
cout<<"\n\nDesea salir del programa?(S/N)> "; cin>>c;
if((c!='n')&&(c!='N')&&(c!='s')&&(c!='S')){
	system("Color 4");
	cout<<"Esta no es una respuesta valida";
	goto DO;}else{	system("Color 7"); system("cls");
	}
	cout<<"\n\n";
	}while(c!='s');
}
