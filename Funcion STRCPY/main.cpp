#include <iostream>
#include <String.h>
#include <stdlib.h>
using namespace std;
int main(int argc, char** argv) {
	int n;
	char categoria [10];
	char c,x;
	do{
		do{
	inicio:
		system("color 07");
	cout<<"\nListado de la ciudades Turisticas en Republica Dominicana\n\n";
	cout<<"1. Santiago de Los Caballeros\n"; 
	cout<<"2. Samana y Las Terrenas\n"; 
	cout<<"3. Puerto Plata, Sosua y Cabarete\n";
	cout<<"4. San Juan\n";
	cout<<"5. La Romana, Bayahibe y Dominicus\n";
	cout<<"6. Boca Chica y Juan Dolio\n";
	cout<<"7. Santo Domingo y Ciudad Colonial\n";
	cout<<"8. Punta Cana y Bavaro\n";
	cout<<"9. Jarabacoa\n";
	cout<<"10. Constanza\n\n";
	cout<<"Ingrese el numero de la ciudad: "; cin>>n;
	
	switch(n){
			case 2:case 3:case 5:case 6:case 8:
				cout<<strcpy(categoria, "Esta ciudad es una Zona Turistica de nivel Alto\n");
				break;
			case 7:case 9:
				cout<<strcpy(categoria, "Esta ciudad es una Zona Turistica de nivel Medio\n");
				break;
					case 1:case 10:
				cout<<strcpy(categoria, "Esta ciudad es una Zona Turistica de nivel Bajo\n");
				break;
					case 4:
				cout<<strcpy(categoria, "Esta no es una Zona Turistica\n");
				break;
			default:
				system("color 04");
				cout<<"Este numero no pertenece a la lista\n\n";
				system("pause");
				goto inicio;
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
	return 0;
}
