#include <iostream>
#include<Windows.h>
using namespace std;
int main(int argc, char** argv) {
float a,b,d,e, resultado;
	char c,x;
		do{
			do{
	HANDLE h= GetStdHandle( STD_OUTPUT_HANDLE );
	SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_INTENSITY);			
	cout<<endl<<"\tPrograma que determina el precio a pagar en un video club\n\n";
	SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_BLUE| FOREGROUND_RED|FOREGROUND_INTENSITY);
	cout<<"Ingrese el precio de la pelicula No.1: "; cin>>a;
	cout<<"Ingrese el precio de la pelicula No.2: "; cin>>b;
	cout<<"Ingrese el precio de la pelicula No.3: "; cin>>d;
	e=a+b+d;
	SetConsoleTextAttribute(h, FOREGROUND_RED |FOREGROUND_INTENSITY);
	if((a==b)&&(a==d)) {
		resultado=a+b;
	cout<<"Los precios son iguales, y su valor es $"<<a<<" pesos";
}else if((a==b)&&(a>d)){
	resultado=a+d;
	cout<<"El Precio Mayor es $"<<a<<" pesos";
}else if ((a==d)&&(a>b)){
	resultado=a+b;
	cout<<"El Precio Mayor es $"<<a<<" pesos";
}else if((b==d)&&(b>a)){
		resultado=a+b;
	cout<<"El Precio Mayor es $"<<b<<" pesos";
}
if ((a>b)&&(a>d)){
	resultado=b+d;
	cout<<"El Precio Mayor es $"<<a<<" pesos";	
}else if((b>a)&&(b>d)) {
	resultado=a+d;
	cout<<"El Precio Mayor es $"<<b<<" pesos";
}else if((d>a)&&(d>b)) {
	resultado=a+b;
	cout<<"El Precio Mayor es $"<<d<<" pesos";
}
	cout<<"\nRestando el precio mayor del total a pagar que es "<<e;
	cout<<"\nSu precio a pagar es: $"<< resultado<<" pesos";
		SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_BLUE| FOREGROUND_RED|FOREGROUND_INTENSITY);	
Do:
cout<<"\n\nDesea probar de nuevo?(S/N)> "; cin>>x;
if((x!='n')&&(x!='N')&&(x!='s')&&(x!='S')){
	system("Color 4");
	cout<<"Esta no es una respuesta valida";
	goto Do;
}else{	system("Color 7"); system ("cls");
}
}while(x!='n');
DO:
cout<<"\n\nDesea salir del programa?(S/N)> "; cin>>c;
if((c!='n')&&(c!='N')&&(c!='s')&&(c!='S')){
	system("Color 4");
	cout<<"Esta no es una respuesta valida";
	goto DO;}else{	system("Color 7"); system ("cls");
	}
	cout<<"\n\n";
	}while(c!='s');
}
