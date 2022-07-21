#include <iostream>
#include <iomanip>
#include<Windows.h>
using namespace std;
int main(int argc, char** argv) {
	float num[20];
	float a,j;
	char c,x;
		do{
			do{
				a=0;
				j=0;
	HANDLE h= GetStdHandle( STD_OUTPUT_HANDLE );
	SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_INTENSITY);			
	cout<<endl<<"Programa que hace las operaciones basicas de los numeros de un arreglo\n"<< endl;
	SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_BLUE| FOREGROUND_RED|FOREGROUND_INTENSITY);	
	for(int i=0;i<=19;i++){
	cout<<"Ingrese el numero de la posicion "<<i+1<<": ";
	cin>>num[i];	
	}
	SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_INTENSITY);	
	cout<<"\nLos Datos del arreglo son: ";
	SetConsoleTextAttribute(h, FOREGROUND_RED |FOREGROUND_INTENSITY);	
	for(int i=0;i<20;i++){
		cout<<"\n"<<num[i];
	}
	SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_INTENSITY);	
	cout<<"\nLos Resultados de la suma son: ";
	for(int i=0;i<20;i++){
		SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_BLUE| FOREGROUND_RED|FOREGROUND_INTENSITY);
		cout<<"\nCon la posicion "<<i+1;
		SetConsoleTextAttribute(h, FOREGROUND_RED |FOREGROUND_INTENSITY);
		for(int j=0;j<20;j++){
		a=num[i]+num[j];
		cout<<" "<<a;
		}
	}
	SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_INTENSITY);	
	cout<<"\nLos Resultados de la resta son: ";
	for(int i=0;i<20;i++){
		SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_BLUE| FOREGROUND_RED|FOREGROUND_INTENSITY);
		cout<<"\nCon la posicion "<<i+1;
		SetConsoleTextAttribute(h, FOREGROUND_RED |FOREGROUND_INTENSITY);
		for(int j=0;j<20;j++){
		a=num[i]-num[j];
		cout<<" "<<a;
		}
	}
	SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_INTENSITY);	
	cout<<"\nLos Resultados de la multiplicacion son: ";
	for(int i=0;i<20;i++){
		SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_BLUE| FOREGROUND_RED|FOREGROUND_INTENSITY);
		cout<<"\nCon la posicion "<<i+1;
		SetConsoleTextAttribute(h, FOREGROUND_RED |FOREGROUND_INTENSITY);
		for(int j=0;j<20;j++){
		a=num[i]*num[j];
		cout<<" "<<a;
		}
	}
	SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_INTENSITY);	
	cout<<"\nLos Resultados de la divicion son: ";
	for(int i=0;i<20;i++){
		SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_BLUE| FOREGROUND_RED|FOREGROUND_INTENSITY);
		cout<<"\nCon la posicion "<<i+1;
		SetConsoleTextAttribute(h, FOREGROUND_RED |FOREGROUND_INTENSITY);
		for(int j=0;j<20;j++){
		a=num[i]/num[j];
		cout<<" "<<setprecision(2)<<a;
		}
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
