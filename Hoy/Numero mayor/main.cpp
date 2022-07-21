#include <iostream>
#include <Windows.h>

using namespace std;
int main(int argc, char** argv) {
	int a,b, mayor;
	char c,x;
	do{
		do{
		
		HANDLE h= GetStdHandle( STD_OUTPUT_HANDLE );
	SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);			
	cout<<endl<<"Programa para determinar cual es el mayor de los numeros\n\n";
	SetConsoleTextAttribute(h,FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		cout<<"Ingrese el primer numero: "; cin>>a;
		cout<<"Ingrese el segundo numero: "; cin>>b;
		(a>b)? mayor=a:mayor=b;
	cout<<"EL mayor es "<<mayor;
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
