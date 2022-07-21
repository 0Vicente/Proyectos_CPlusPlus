#include <iostream>
#include <Windows.h>

using namespace std;
int main(int argc, char** argv) {
	int a,b,d, consumo;
	char c,x;
	do{
		do{
		HANDLE h= GetStdHandle( STD_OUTPUT_HANDLE );
	SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);			
	cout<<endl<<"Programa para calcular el consumo de agua\n\n";
	SetConsoleTextAttribute(h,FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		cout<<"Ingrese la cantidad de agua(litros): "; cin>>b;
		if(b<1){
			a=0;
		}else if ((b>=1)&&(b<=50)){
			a=1;
		}else if(b<=200) { 
			a=2;
		}else if (b<=250){
			a=3;
		}else if(b>250){
			a=4;
		}
		d=200;
		switch(a){
			case 0:
				cout<<"Usted no tubo consumo este mes";
				break;
			case 1:
				cout<<"Su consumo de este mes fue "<<b<<" litros de agua por esa cantidad debera pagar $"<<d<<" Pesos";
				break;
			case 2:
				consumo=d+(b*20);
				cout<<"Su consumo de este mes fue "<<b<<" litros de agua por esa cantidad debera pagar $"<<consumo<<" Pesos";
				break;
			case 3:
				consumo=d+(b*30);
				cout<<"Su consumo de este mes fue "<<b<<" litros de agua por esa cantidad debera pagar $"<<consumo<<" Pesos";
				break;
			case 4:
			consumo=d+(b*35);
				cout<<"Su consumo de este mes fue "<<b<<" litros de agua por esa cantidad debera pagar $"<<consumo<<" Pesos";
				break;
			default:
				cout<<"Usted no tubo consumo este mes";
				break;
		}
Do:
cout<<"\n\nDesea probar de nuevo?(S/N)> "; cin>>x;
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
