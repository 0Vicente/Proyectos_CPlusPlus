#include <iostream>
#include <Windows.h>

using namespace std;
int main(int argc, char** argv) {
	int a;
	char c,x;
	string mayor;
	do{
	do{
	HANDLE h= GetStdHandle( STD_OUTPUT_HANDLE );
	SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);			
	cout<<endl<<"Programa para calcular la pension de un padre o madre\n\n";
	SetConsoleTextAttribute(h,FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		cout<<"Ingrese el numero de hijos para el pago de manutension: "; cin>>a;
		switch(a){
			case 0:
				cout<<"Usted no debera pagar nada";
				break;
			case 1:
				cout<<"Usted debera Pagar 10,000 Pesos Mensuales";
				break;
			case 2:
				cout<<"Usted debera Pagar 18,000 Pesos Mensuales";
				break;
			case 3:
				cout<<"Usted debera Pagar 25,000 Pesos Mensuales";
				break;
			case 4:
				cout<<"Usted debera Pagar 30,000 Pesos Mensuales";
				break;
			default:
				cout<<"Usted debera Pagar 35,000 Pesos Mensuales";
				break;
		}Do:
cout<<"\n\nDesea probar con otro alumno?(S/N)> "; cin>>x;
if((x!='n')&&(x!='N')&&(x!='s')&&(x!='S')){
	system("Color 4");
	cout<<"Esta no es una respuesta valida";
	goto Do;
}else{	system("Color 7");
}
}while(x!='n');
DO:
cout<<"\n\nDesea salir del programa?(S/N)> "; cin>>c;
if((c!='n')&&(c!='N')&&(c!='s')&&(c!='S')){
	system("Color 4");
	cout<<"Esta no es una respuesta valida";
	goto DO;}else{	system("Color 7");
	}
	cout<<"\n\n";
	}while(c!='s');
}
