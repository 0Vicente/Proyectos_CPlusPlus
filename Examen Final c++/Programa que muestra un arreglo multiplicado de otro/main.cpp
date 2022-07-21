#include <iostream>
#include <iomanip>
#include<Windows.h>
using namespace std;
int main(int argc, char** argv) {
	int num1[5], num2[5], num3[10], num4[10];
	int a=5,aux;
	char c,x;
		do{
			do{
	HANDLE h= GetStdHandle( STD_OUTPUT_HANDLE );
	SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_INTENSITY);			
	cout<<endl<<"\tPrograma que muestra un arreglo multiplicado de otro\n"<< endl;
	SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_BLUE| FOREGROUND_RED|FOREGROUND_INTENSITY);	
		for(int i=0;i<5;i++){
	cout<<"Ingrese el numero de la posicion "<<i+1<<": ";
	cin>>num1[i];		
	}
	
	for(int i=0;i<5;i++){
	num2[i]= num1[i]*a;
	}
	
	for(int i=0;i<10;i++){
		if(i<5){
	num3[i]=num1[i];	
	}else{
	num3[i]=num2[i-5];	
	}
	}
	for(int i=0;i<10;i++){
	num4[i]=num3[i];
	}
		for(int i=0;i<10;i++){
		for(int j=i+1;j<10;j++){
			if (num4[j]<num4[i]){
				aux=num4[i];
				num4[i]=num4[j];
				num4[j]=aux;
			}
		}
	}
	
	SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_INTENSITY);		
	cout<<"\nArreglo 1";
		SetConsoleTextAttribute(h, FOREGROUND_RED |FOREGROUND_INTENSITY);
	for(int i=0; i<5; i++){
		cout<<"\n"<<num1[i];
	}
	
	SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_INTENSITY);		
	cout<<"\n\nArreglo 2";
		SetConsoleTextAttribute(h, FOREGROUND_RED |FOREGROUND_INTENSITY);
	for(int i=0;i<5;i++){
		cout<<"\n"<<num2[i];
	}
	
	SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_INTENSITY);		
	cout<<"\n\nArreglo Completo";
		SetConsoleTextAttribute(h, FOREGROUND_RED |FOREGROUND_INTENSITY);
	for(int i=0;i<10;i++){
		cout<<"\n"<<num3[i];
	}
	
	SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_INTENSITY);		
	cout<<"\n\nArreglo Completo Ordenado";
		SetConsoleTextAttribute(h, FOREGROUND_RED |FOREGROUND_INTENSITY);
	for(int i=0;i<10;i++){
		cout<<"\n"<<num4[i];
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


