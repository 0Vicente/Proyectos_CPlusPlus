#include <iostream>
#include <Windows.h>


using namespace std;

int main(int argc, char** argv) {
	int a;
	char x,c;
	do {
		do{
	HANDLE h= GetStdHandle( STD_OUTPUT_HANDLE );
	SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);			
	cout<<endl<<"Programa que determina si puedes votar o no\n\n";
	SetConsoleTextAttribute(h,FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	cout<<"Ingrese su edad: "; cin >>a;
	if (a>17){
		cout<<"Su edad es "<<a<< " años usted es mayor de edad\nUsted VOTA, se acabaron las menores";
	}else {cout<<"Su edad es "<<a<< " años usted es menor de edad\nUsted BOTA la basura cuando viene el camion";
	}
	Do:
cout<<"\n\nDesea probar de nuevo?(S/N)> "; cin>>x;
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
