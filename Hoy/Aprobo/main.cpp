#include <iostream>
#include<Windows.h>
using namespace std;
int main(int argc, char** argv) {
 string nombre, matricula;
	float a,b,e,d, resultado;
	int o;
	char c,x;
		do{
			do{
	HANDLE h= GetStdHandle( STD_OUTPUT_HANDLE );
	SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);			
	cout<<endl<<"\tCalculadora de Promedio Cuatrimestral\n\n";
	SetConsoleTextAttribute(h,FOREGROUND_BLUE | FOREGROUND_INTENSITY);	
	cout<<"Ingrese Su Nombre: "; getline(cin,nombre);
	cout<<"Ingrese Su Matricula: "; cin>>matricula;
	notas:
	cout<<"\nVamos a calcular su promedio\n\n";
	cout<<"Ingrese La nota del mes No.1: "; cin>>a;
	cout<<"Ingrese La nota del mes No.2: "; cin>>b;
	cout<<"Ingrese La nota del mes No.3: "; cin>>e;
	cout<<"Ingrese La nota del mes No.4: "; cin>>d;
	if ((a>100)||(b>100)||(c>100)||(d>100)){
	cout<<"Las notas no pueden ser mayores a 100\n";
	goto notas;
	}
	if ((a<0)||(b<0)||(c<0)||(d<0)){
	cout<<"Las notas no pueden ser menores a 0\n";
	goto notas;
	}
	resultado=(a+b+e+d)/4;
		if (resultado>=90){
			o=1;
		}else if(resultado>=80) { 
			o=2;
		}else if (resultado>=75){
			o=3;
		}else if (resultado>=70){
			o=4;
		}else if(resultado<70){
			o=0;
		}
		switch(o){
			case 1:
				cout<<"\n\nSaludos! "<<nombre<<" "<<matricula<<" su promedio es "<<resultado<<" usted aplica A\n";
			cout<<"Aprobado";
				break;
			case 2:
			cout<<"\n\nSaludos! "<<nombre<<" "<<matricula<<" su promedio es "<<resultado<<" usted aplica B\n";
			cout<<"Aprobado";
				break;
			case 3:
			cout<<"\n\nSaludos! "<<nombre<<" "<<matricula<<" su promedio es "<<resultado<<" usted aplica C\n";
			cout<<"Aprobado";
				break;
			case 4:
				cout<<"\n\nSaludos! "<<nombre<<" "<<matricula<<" su promedio es "<<resultado<<" usted aplica D\n";
			cout<<"Aprobado";
				break;
			default:
				cout<<"\n\nSaludos! "<<nombre<<" "<<matricula<<" su promedio es "<<resultado<<" usted aplica F\n";
			cout<<"Reprobado";
				break;
}
Do:
cout<<"\n\nDesea probar con otro alumno?(S/N)> "; cin>>x;
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
