 #include <iostream>
#include <Windows.h>
#include <iomanip>
using namespace std;
int main(int argc, char** argv) {
		int a;
		float b;
		char c,x;
		HANDLE h= GetStdHandle( STD_OUTPUT_HANDLE );
		do{
		do{
			system("cls");
		cout<<"\n\tPrograma que calcula los numeros multiplos de 5 hasta el 500\n";	

		for(int i=5;i<501;i++){
			if (i%5==0){
				SetConsoleTextAttribute(h, FOREGROUND_BLUE |FOREGROUND_INTENSITY);
			cout<<setw(3)<<i<<" es multiplo de 5\n";
			}
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
