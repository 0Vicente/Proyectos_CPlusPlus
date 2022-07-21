#include <iostream>
#include<Windows.h>
using namespace std;
int main(int argc, char** argv) {
	int nota[4];
	float aux,acu, resultado;
	char c,x;
		do{
			do{
				resultado=0;
				acu=0;
	HANDLE h= GetStdHandle( STD_OUTPUT_HANDLE );
	SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_INTENSITY);			
	cout<<endl<<"Calculadora de Promedio Cuatrimestral\n"<< endl;
	SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_BLUE| FOREGROUND_RED|FOREGROUND_INTENSITY);	
	for(int i=0;i<4;i++){
	cout<<"Ingrese la nota No."<<i+1<<" : ";
		cin>>nota[i];
		acu=acu+nota[i];
		resultado = acu/(i+1);
	}

	for(int i=0;i<4;i++){
		for(int j=i+1;j<4;j++){
			if (nota[j]<nota[i]){
				aux=nota[i];
				nota[i]=nota[j];
				nota[j]=aux;
			}
		}
	}
	
	SetConsoleTextAttribute(h, FOREGROUND_RED |FOREGROUND_INTENSITY);
	cout<<"\nSu nota minima es: "<<nota[0];
	cout<<"\nSu nota maxima es: "<<nota[3];
	cout<<"\nSu nota promedio es: "<< resultado;
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
