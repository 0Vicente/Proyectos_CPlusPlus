#include <iostream>
#include <Windows.h>
#include <iomanip>
#include <math.h>
using namespace std;
int main(int argc, char** argv) {
	char c,x;
	double monto, ano;
	double principal = 1000.00;
	double tasa = 0.5;
	do{
	do{
	HANDLE color= GetStdHandle( STD_OUTPUT_HANDLE );
	SetConsoleTextAttribute(color, FOREGROUND_GREEN | FOREGROUND_INTENSITY);			
	cout<<endl<<"Programa que calcula el monto compuesto de un deposito\n\n";
	SetConsoleTextAttribute(color,FOREGROUND_BLUE | FOREGROUND_RED |FOREGROUND_GREEN |FOREGROUND_INTENSITY);
		cout<<"Intruduzca el año: "; cin>> ano;
		cout<<"Monto de deposito: "; cin>>monto; 
		cout<<fixed<<setprecision(2);
		SetConsoleTextAttribute(color, FOREGROUND_RED | FOREGROUND_INTENSITY);
		for(int i=1; i<=ano;i++){
			monto = principal * pow(1+tasa,i);
			cout<<setw(4)<<i<< setw(50)<<monto<<"\n"; 
		}		
		
		SetConsoleTextAttribute(color,FOREGROUND_BLUE | FOREGROUND_RED |FOREGROUND_GREEN |FOREGROUND_INTENSITY);
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
