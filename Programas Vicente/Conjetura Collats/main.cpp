#include <iostream>
#include <Windows.h>
using namespace std;
int main(int argc, char** argv) {
	int a,b;
	char c,x;
	string mayor;
	do{do{
	HANDLE h= GetStdHandle( STD_OUTPUT_HANDLE );
	SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);			
	cout<<endl<<"Programa que muestra la Conjetura Collats\n\n";
	SetConsoleTextAttribute(h,FOREGROUND_BLUE | FOREGROUND_RED |FOREGROUND_GREEN |FOREGROUND_INTENSITY); 
		cout<<"Introduzca un numero: ";cin>>a;
		cout<<"\n";
				while(a!=1){
				if(a%2==0){
				a/=2;
				SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
					cout<<a<<"\n";
				}else{
				a=3*a+1;
				SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
					cout<<a<<"\n";}}	
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
