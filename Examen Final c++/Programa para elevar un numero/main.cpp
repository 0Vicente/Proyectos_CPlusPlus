#include <iostream>
#include<Windows.h>
using namespace std;
int main(int argc, char** argv) {
	int n,p,i,sum;
	char c,x;
		do{
			do{
			i=0; sum=1;
	HANDLE h= GetStdHandle( STD_OUTPUT_HANDLE );
	SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_INTENSITY);			
	cout<<endl<<"\tPrograma para elevar un numero\n"<< endl;
	SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_BLUE| FOREGROUND_RED|FOREGROUND_INTENSITY);	
	cout<<"Introduzca el numero a ser elevado: "; cin>>n;
	cout<<"Introduzca la potencia: "; cin>>p;
 while(i!=p){
		i++;
		sum=sum*n;	
	}
	SetConsoleTextAttribute(h, FOREGROUND_RED |FOREGROUND_INTENSITY);	
	cout<<"El Resultado es: "<<sum;
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
