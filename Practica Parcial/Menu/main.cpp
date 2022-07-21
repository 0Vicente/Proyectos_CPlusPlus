 #include <iostream>
#include <Windows.h>
#include <math.h>
using namespace std;
int main(int argc, char** argv) {
		int a;
		float b;
		char c,x;
		HANDLE h= GetStdHandle( STD_OUTPUT_HANDLE );
		do{
		do{
			system("cls");
		cout<<"\n\tPrograma muestra menu\n";
		cout<<"\n\n1. Calcular el triple de un numero \n2. Calcular la mitad de un numero \n3. Calcular la raiz cuadrada de un numero\n4. Calcular el cubo de un numero\n5. Salir\n\n";
		cout<<"\nIntroduzca el numero de lo que desea: "; cin>>a;

		switch(a){
		case 1:
			cout<<"\n\nIntroduzca el numero: "; cin>>b;
			SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		 	cout<<"\nEl triple de "<<b<<" es "<<b*3<<"\n\n";
		 	SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_RED |FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		 	system("pause");
		 break;	
		 
		case 2:
			cout<<"\n\nIntroduzca el numero: "; cin>>b;
			SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		 	cout<<"\nLa mitad de  "<<b<<" es "<<b/2<<"\n\n";
		 	SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_RED |FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		 	system("pause");
		 break;
		case 3:
		cout<<"\n\nIntroduzca el numero: "; cin>>b;
			SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		 	cout<<"\nLa Raiz cuadrada de  "<<b<<" es "<<sqrt(b)<<"\n\n";
		 	SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_RED |FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		 	system("pause");
		 break;
		 	case 4:
		cout<<"\n\nIntroduzca el numero: "; cin>>b;
			SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		 	cout<<"\nEl cubo de "<<b<<" es "<<pow(b,3)<<"\n\n";
		 	SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_RED |FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		 	system("pause");
		 break;
		 	case 5:
			goto DO;
		 break;
		default:
			SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
		 	cout<<"Error: el numero "<<a<<" no esta asociado a ninguna accion.\n";
		 	SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_RED |FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		 	system("pause");
		break;
	}
	Do:
		SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_RED |FOREGROUND_BLUE | FOREGROUND_INTENSITY);
cout<<"\n\nDesea probar de nuevo?(S/N)> "; cin>>x;
if((x!='n')&&(x!='N')&&(x!='s')&&(x!='S')){
	system("Color 4");
	cout<<"Esta no es una respuesta valida\n";
	goto Do;
}else{	
system("Color 7");
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
	
	return 0;
}
