#include <iostream>
#include<Windows.h>
#include <iomanip>
using namespace std;
int main(int argc, char** argv) {
    double a=55e-3, b=9e-7,pi=3.14159865, d=3e6, g=9.8;
	char c,x;
		do{
			do{
	HANDLE h= GetStdHandle( STD_OUTPUT_HANDLE );
	SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_INTENSITY);			
	cout<<endl<<"\tPrograma que formatea numeros de punto flotante\n"<< endl;
		
	SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_INTENSITY);	
	cout<<"Los Numeros sin formato son: ";
	SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_BLUE| FOREGROUND_RED|FOREGROUND_INTENSITY);	
	cout<<"\nValor 1: "<<a<<"\nValor 2: "<<b<<"\nValor 3: "<<pi<<"\nValor 4: "<<d<<"\nValor 5: "<<g;
	SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_INTENSITY);	
	cout<<"\n\nLos Numeros decimales son: ";
	SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_BLUE| FOREGROUND_RED|FOREGROUND_INTENSITY);	
	cout<<fixed<<"\nValor 1: "<<a<<"\nValor 2: "<<b<<"\nValor 3: "<<pi<<"\nValor 4: "<<d<<"\nValor 5: "<<g;
	SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_INTENSITY);	
	cout<<"\n\nLos Numeros con formato son: ";
	SetConsoleTextAttribute(h, FOREGROUND_RED |FOREGROUND_INTENSITY);	
	cout<<fixed<<setprecision(2);
	cout<<"\nValor 1: "<<setw(10)<<a<<"\nValor 2: "<<setw(10)<<b<<"\nValor 3: "<<setw(10)<<pi<<"\nValor 4: "<<setw(10)<<d<<"\nValor 5: "<<setw(10)<<g;
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


