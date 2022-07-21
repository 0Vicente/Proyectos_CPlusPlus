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
		cout<<"\n\tPrograma que determina la distacia de las provincias que se muestran a continuacion\n";
		cout<<"\n\n1. San Cristobal\n2. Bani \n3. San Jose de Ocoa\n4. Santiago	\n5. Barahona\n6. Punta Cana\n7. Puerto Plata\n8. Monte Cristi\n9. Pedernales\n";
		cout<<"\nIntroduzca el numero de la ciudad que desea saber la distancia: "; cin>>a;
		
		
		switch(a){
		case 1:
			cout<<"\n\nLas distacias son los equivalentes a cientos de kilometros\n";
			SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		 	cout<<"San Cristóbal esta a 28 KM";
		 break;	
		 
		case 2:
			cout<<"\n\nLas distacias son los equivalentes a cientos de kilometros\n";
			SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		 	cout<<"Bani esta a 61 KM";
		 break;
		case 3:
			cout<<"\n\nLas distacias son los equivalentes a cientos de kilometros\n";
			SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		 	cout<<"San José de Ocoa esta a 115 KM";
		 break;	
		case 4:
			cout<<"\n\nLas distacias son los equivalentes a cientos de kilometros\n";
			SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		 	cout<<"Santiago esta a 158 KM";
		 break;
		case 5:
			cout<<"\n\nLas distacias son los equivalentes a cientos de kilometros\n";
			SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		 	cout<<"Barahona esta a 180 KM";
		 break;
		case 6:
			cout<<"\n\nLas distacias son los equivalentes a cientos de kilometros\n";
			SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		 	cout<<"Punta Cana esta a 191 KM";
		 break;
		case 7:
			cout<<"\n\nLas distacias son los equivalentes a cientos de kilometros\n";
			SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		 	cout<<"Puerto Plata esta a 205 KM";
		 break;
		case 8:
			cout<<"\n\nLas distacias son los equivalentes a cientos de kilometros\n";
			SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		 	cout<<"Monte Cristi esta a 273 KM";
		 break;
		case 9:
			cout<<"\n\nLas distacias son los equivalentes a cientos de kilometros\n";
			SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		 	cout<<"Pedernales esta a 307 KM";
		 break;
		default:
			SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
		 	cout<<"Error: el numero "<<a<<" no esta asociado a ninguna ciudad.";
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
