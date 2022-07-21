#include <iostream>
#include<Windows.h>
using namespace std;
int main(int argc, char** argv) {
 string nombre, matricula;
	float a,b,e,d, monto,tp, resultado;
	int o;
	char c, x;
	do{
		do{
		HANDLE h= GetStdHandle( STD_OUTPUT_HANDLE );
	SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);			
	cout<<endl<<"Calculadora de Promedio Cuatrimestral\n\n";
	SetConsoleTextAttribute(h,FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	cout<<"Ingrese Su Nombre: "; cin>>nombre;
	cout<<"Ingrese Su Matricula: "; cin>>matricula;
	cout<<"Ingrese el total a Pagar: "; cin>>monto;
	cout<<"Vamos a calcular su promedio para saber si aplica descuento\n\n";
	cout<<"Ingrese La nota del mes No.1: "; cin>>a;
	cout<<"Ingrese La nota del mes No.2: "; cin>>b;
	cout<<"Ingrese La nota del mes No.3: "; cin>>e;
	cout<<"Ingrese La nota del mes No.4: "; cin>>d;
	resultado=(a+b+e+d)/4;
		if (resultado>=90){
			o=1;
		}else if(resultado>=85) { 
		o=2;
		}else if (resultado>=80){
			o=3;
		}else if (resultado<80){
			o=0;
		}
		switch(o){
			case 1:
				tp=monto-(monto*0.2);
				cout<<"\n\nSaludos! "<<nombre<<" matricula "<<matricula<<" su promedio es "<<resultado<<" usted aplica un descuento de 20% solo pagara $"<<tp<<" Pesos";
				break;
			case 2:
				tp=monto-(monto*0.1);
				cout<<"\n\nSaludos! "<<nombre<<" matricula "<<matricula<<" su promedio es "<<resultado<<" usted aplica un descuento de 10% solo pagara $"<<tp<<" Pesos";
				break;
			case 3:
				tp=monto-(monto*0.05);
				cout<<"\n\nSaludos! "<<nombre<<" matricula "<<matricula<<" su promedio es "<<resultado<<" usted aplica un descuento de 5% solo pagara $"<<tp<<" Pesos";
				break;
			default:
				cout<<"\n\nSaludos! "<<nombre<<" matricula "<<matricula<<" su promedio es "<<resultado<<" usted no aplica descuento debera pagar $"<<monto<<" Pesos";
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
		

