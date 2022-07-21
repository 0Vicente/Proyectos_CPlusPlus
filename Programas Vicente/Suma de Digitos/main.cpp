#include <iostream>
#include<Windows.h>
using namespace std;
int main(int argc, char** argv) {
	
	int a;
	int o=0;
	char c,x;
	do{
			do{	
			o=0;
	HANDLE h= GetStdHandle( STD_OUTPUT_HANDLE );
	SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_INTENSITY);			
	cout<<endl<<"\tSumadora de Digitos\n\n";
	SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_BLUE| FOREGROUND_RED|FOREGROUND_INTENSITY);	
	cout<<"\nVamos a calcular la suma de los digitos\n\n";
	cout<<"Ingrese el numero: "; cin>>a;
	cout<<"\n";
	
	while (a>0){
		o=o+a%10;
		a=a/10;
		}
	cout<<"\n";
	SetConsoleTextAttribute(h, FOREGROUND_RED |FOREGROUND_INTENSITY);
	cout<<"La Suma Total De Los Digitos es: "<<o;
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
