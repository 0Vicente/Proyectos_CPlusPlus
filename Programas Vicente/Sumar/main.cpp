#include <iostream>
#include<Windows.h>
using namespace std;
int main(int argc, char** argv) {
 string nombre, matricula;
	float a,b;
	int o;
	char c,x;
		do{
			do{
	HANDLE h= GetStdHandle( STD_OUTPUT_HANDLE );
	SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_INTENSITY);			
	cout<<"\nVamos a calcular la suma de la serie\n\n";
	SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_BLUE| FOREGROUND_RED|FOREGROUND_INTENSITY);	
	cout<<"Ingrese el numero del ultimo numero: "; cin>>a;
	cout<<"\n";
		for(int i = 2 ; i <= a; i+=2){
	  cout<<i<<"\n";
	  b=b+i;
	}
	cout<<"\n";
	SetConsoleTextAttribute(h, FOREGROUND_RED |FOREGROUND_INTENSITY);
	cout<<"La Suma Total es: "<<b;
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
