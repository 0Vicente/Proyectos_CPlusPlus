#include <iostream>
#include <Windows.h>
using namespace std;
int main(int argc, char** argv) {
	float b,d;
	int a;
	char c,x;
	string mayor;
	do{
	do{
	HANDLE h= GetStdHandle( STD_OUTPUT_HANDLE );
	SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);			
	cout<<endl<<"Programa para calcular descuento al empleado de acuerdo al sueldo\n\n";
	SetConsoleTextAttribute(h,FOREGROUND_BLUE | FOREGROUND_RED |FOREGROUND_GREEN |FOREGROUND_INTENSITY);
		cout<<"Ingrese la cantidad devengada por el empleado: "; cin>>b;
		
		if (b<=20000){
		a=1;
		}else if(b<=30000){
		a=2;
		}else if(b>30000){
			a=3;
		}
				
		switch(a){
			case 1:
				d=b*0.15;
					SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
				cout<<"Usted aplica un descuento de un 15% que seria $"<<d<<" pesos de su sueldo total que es $"<<b;
				break;
			case 2:
				d=b*0.1;
					SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
				cout<<"Usted aplica un descuento de un 10% que seria $"<<d<<" pesos de su sueldo total que es $"<<b;
				break;
			case 3:
				d=b*0.05;
					SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
				cout<<"Usted aplica un descuento de un 5% que seria $"<<d<<" pesos de su sueldo total que es $"<<b;
				break;
			case 4:
				cout<<"Usted debera Pagar 30,000 Pesos Mensuales";
				break;
			default:
				cout<<"Usted debera Pagar 35,000 Pesos Mensuales";
				break;
		}
		SetConsoleTextAttribute(h,FOREGROUND_BLUE | FOREGROUND_RED |FOREGROUND_GREEN |FOREGROUND_INTENSITY);
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
	goto DO;}else{	system("Color 7");system("cls");
	}
	cout<<"\n\n";
	}while(c!='s');
}
