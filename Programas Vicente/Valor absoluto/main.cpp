#include <iostream>
#include <Windows.h>

using namespace std;
int main(int argc, char** argv) {
	int a,b;
	char c,x;
	string mayor;
	do{
	do{
	HANDLE h= GetStdHandle( STD_OUTPUT_HANDLE );
	SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);			
	cout<<endl<<"Programa que muestra el valor absoluto\n\n";
	SetConsoleTextAttribute(h,FOREGROUND_BLUE | FOREGROUND_RED |FOREGROUND_GREEN |FOREGROUND_INTENSITY); 
		cout<<"Introduzca el numero: ";cin>>a;
				if (a<0){
					b=a;
					a=a*-1;
					SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
					cout<<"El valor absoluto de "<<b<<" es "<<a;
				}else {
					b=a;
					SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
					cout<<"El valor absoluto de "<<b<<" es "<<a;
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
