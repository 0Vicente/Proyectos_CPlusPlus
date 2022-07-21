 #include <iostream>
#include <Windows.h>
using namespace std;
int main(int argc, char** argv) {
		int a;
		char c,x;
		HANDLE h= GetStdHandle( STD_OUTPUT_HANDLE );
		do{
		do{
			system("cls");
		cout<<"\n\tPrograma Con Los Colores Del Semaforo\n";
		cout<<"\n\n1. Rojo\n2. Amarillo \n3. Verde\n\n";
		cout<<"\nIntroduzca el numero del color: "; cin>>a;
		
		
		switch(a){
		case 1:
			system("color 40");
			system("cls");
		 	cout<<"\n\n\n\n\n\tEste color indica Pare\n\n\n\n\n";
		 	system("pause");
		 break;	
		 
		case 2:
			system("color 60");
			system("cls");
		 	cout<<"\n\n\n\n\n\tEste color indica alerta, pase con precausion\n\n\n\n\n";
		 	system("pause");
		 break;
		case 3:
			system("color 20");
			system("cls");
		 	cout<<"\n\n\n\n\n\tEste color indica que puede pasar\n\n\n\n\n";
		 	system("pause");
		 break;
		 
		default:
			SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
		 	cout<<"\nError: el numero "<<a<<" no esta asociado a ningun color.\n";
		 	SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_RED |FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		 	system("pause");
		 	x='s';
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
