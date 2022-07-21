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
	cout<<endl<<"Programa que genera un menu\n\n";
	SetConsoleTextAttribute(h,FOREGROUND_BLUE | FOREGROUND_RED |FOREGROUND_GREEN |FOREGROUND_INTENSITY);
		cout<<"1. Archivo\n2. Buscar\n3. Salir"; 
		cout<<"\n\nIntroduzca la opcion: ";cin>>a;
				
		switch(a){
			case 1:
					SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
				cout<<"Este es el Archivo";
				break;
			case 2:
					SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
				cout<<"El Archivo se buscaria aqui";
				break;
			case 3:
				system("cls");
				SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
				cout<<"Ha Salido";
				break;
			default:
				system("Color 4");
				cout<<"Esta no es una opcion valida";
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
	goto DO;}else{	system("Color 7"); system("cls");
	}
	cout<<"\n\n";
	}while(c!='s');
}
