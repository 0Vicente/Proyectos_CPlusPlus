#include <iostream>
#include <iomanip>
#include<Windows.h>
using namespace std;
int main(int argc, char** argv) {
	float num1[10], num2[10], num3[20];
	char c,x;
		do{
			do{
	HANDLE h= GetStdHandle( STD_OUTPUT_HANDLE );
	SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_INTENSITY);			
	cout<<endl<<"\tPrograma que muestra los numeros de dos arreglos en uno solo\n"<< endl;
	SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_BLUE| FOREGROUND_RED|FOREGROUND_INTENSITY);	
	for(int i=0;i<=19;i++){
	if(i<10){
	cout<<"Ingrese el numero de la posicion "<<setw(2)<<i+1<<": ";
	cin>>num1[i];	
	}else{
	cout<<"Ingrese el numero de la posicion "<<setw(2)<<i+1<<": ";
	cin>>num2[i-10];	
	}
	}
	for(int i=0;i<=19;i++){
		if(i<10){
	num3[i]=num1[i];	
	}else{
	num3[i]=num2[i-10];	
	}
	}
	SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_INTENSITY);		
	cout<<"\nArreglo 1";
		SetConsoleTextAttribute(h, FOREGROUND_RED |FOREGROUND_INTENSITY);
	for(int i=0;i<10;i++){
		cout<<"\n"<<setw(4)<<num1[i];
	}
	SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_INTENSITY);		
	cout<<"\n\nArreglo 2";
		SetConsoleTextAttribute(h, FOREGROUND_RED |FOREGROUND_INTENSITY);
	for(int i=0;i<10;i++){
		cout<<"\n"<<setw(4)<<num2[i];
	}
	SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_INTENSITY);		
	cout<<"\n\nArreglo Completo";
		SetConsoleTextAttribute(h, FOREGROUND_RED |FOREGROUND_INTENSITY);
	for(int i=0;i<20;i++){
		cout<<"\n"<<setw(4)<<num3[i];
	}
	
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
