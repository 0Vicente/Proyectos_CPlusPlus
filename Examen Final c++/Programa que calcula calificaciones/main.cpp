#include <iostream>
#include <iomanip>
#include<Windows.h>
using namespace std;
struct calificaciones{
	string nombre;
	float cal1;
	float cal2;
	float cal3;
	float cal4;	
}est1,est2,est3,est4,est5,est6,est7,est8,est9,est10,est11,est12,est13,est14,est15;
int main(int argc, char** argv) {
	float pr[16];
	float pg,j,aux;
	float a,acu,cont,m,me;
	char c,x;
		do{
			do{
				acu=0; cont=0;
	HANDLE h= GetStdHandle( STD_OUTPUT_HANDLE );
	SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_INTENSITY);			
	cout<<endl<<"Programa que calcula calificaciones\n"<< endl;
	SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_BLUE| FOREGROUND_RED|FOREGROUND_INTENSITY);	
	
	cout<<"Ingrese el nombre del estudiante 1: "; cin>>est1.nombre;
	cout<<"Ingrese lacalificacion NO.1: ";cin>>est1.cal1;
	cout<<"Ingrese lacalificacion NO.2: ";cin>>est1.cal2;
	cout<<"Ingrese lacalificacion NO.3: ";cin>>est1.cal3;
	cout<<"Ingrese lacalificacion NO.4: ";cin>>est1.cal4;
	cout<<"\n";
	cout<<"Ingrese el nombre del estudiante 2: "; cin>>est2.nombre;
	cout<<"Ingrese lacalificacion NO.1: ";cin>>est2.cal1;
	cout<<"Ingrese lacalificacion NO.2: ";cin>>est2.cal2;
	cout<<"Ingrese lacalificacion NO.3: ";cin>>est2.cal3;
	cout<<"Ingrese lacalificacion NO.4: ";cin>>est2.cal4;
	cout<<"\n";
	cout<<"Ingrese el nombre del estudiante 3: "; cin>>est3.nombre;
	cout<<"Ingrese lacalificacion NO.1: ";cin>>est3.cal1;
	cout<<"Ingrese lacalificacion NO.2: ";cin>>est3.cal2;
	cout<<"Ingrese lacalificacion NO.3: ";cin>>est3.cal3;
	cout<<"Ingrese lacalificacion NO.4: ";cin>>est3.cal4;
	cout<<"\n";
	cout<<"Ingrese el nombre del estudiante 4: "; cin>>est4.nombre;
	cout<<"Ingrese lacalificacion NO.1: ";cin>>est4.cal1;
	cout<<"Ingrese lacalificacion NO.2: ";cin>>est4.cal2;
	cout<<"Ingrese lacalificacion NO.3: ";cin>>est4.cal3;
	cout<<"Ingrese lacalificacion NO.4: ";cin>>est4.cal4;
	cout<<"\n";
	cout<<"Ingrese el nombre del estudiante 5: "; cin>>est5.nombre;
	cout<<"Ingrese lacalificacion NO.1: ";cin>>est5.cal1;
	cout<<"Ingrese lacalificacion NO.2: ";cin>>est5.cal2;
	cout<<"Ingrese lacalificacion NO.3: ";cin>>est5.cal3;
	cout<<"Ingrese lacalificacion NO.4: ";cin>>est5.cal4;
	cout<<"\n";
	cout<<"Ingrese el nombre del estudiante 6: "; cin>>est6.nombre;
	cout<<"Ingrese lacalificacion NO.1: ";cin>>est6.cal1;
	cout<<"Ingrese lacalificacion NO.2: ";cin>>est6.cal2;
	cout<<"Ingrese lacalificacion NO.3: ";cin>>est6.cal3;
	cout<<"Ingrese lacalificacion NO.4: ";cin>>est6.cal4;
	cout<<"\n";
	cout<<"Ingrese el nombre del estudiante 7: ";cin>>est7.nombre;
	cout<<"Ingrese lacalificacion NO.1: ";cin>>est7.cal1;
	cout<<"Ingrese lacalificacion NO.2: ";cin>>est7.cal2;
	cout<<"Ingrese lacalificacion NO.3: ";cin>>est7.cal3;
	cout<<"Ingrese lacalificacion NO.4: ";cin>>est7.cal4;
	cout<<"\n";
	cout<<"Ingrese el nombre del estudiante 8: "; cin>>est8.nombre;
	cout<<"Ingrese lacalificacion NO.1: ";cin>>est8.cal1;
	cout<<"Ingrese lacalificacion NO.2: ";cin>>est8.cal2;
	cout<<"Ingrese lacalificacion NO.3: ";cin>>est8.cal3;
	cout<<"Ingrese lacalificacion NO.4: ";cin>>est8.cal4;
	cout<<"\n";
	cout<<"Ingrese el nombre del estudiante 9: "; cin>>est9.nombre;
	cout<<"Ingrese lacalificacion NO.1: ";cin>>est9.cal1;
	cout<<"Ingrese lacalificacion NO.2: ";cin>>est9.cal2;
	cout<<"Ingrese lacalificacion NO.3: ";cin>>est9.cal3;
	cout<<"Ingrese lacalificacion NO.4: ";cin>>est9.cal4;
	cout<<"\n";
	cout<<"Ingrese el nombre del estudiante 10: "; cin>>est10.nombre;
	cout<<"Ingrese lacalificacion NO.1: ";cin>>est10.cal1;
	cout<<"Ingrese lacalificacion NO.2: ";cin>>est10.cal2;
	cout<<"Ingrese lacalificacion NO.3: ";cin>>est10.cal3;
	cout<<"Ingrese lacalificacion NO.4: ";cin>>est10.cal4;
	cout<<"\n";
	cout<<"Ingrese el nombre del estudiante 11: "; cin>>est11.nombre;
	cout<<"Ingrese lacalificacion NO.1: ";cin>>est11.cal1;
	cout<<"Ingrese lacalificacion NO.2: ";cin>>est11.cal2;
	cout<<"Ingrese lacalificacion NO.3: ";cin>>est11.cal3;
	cout<<"Ingrese lacalificacion NO.4: ";cin>>est11.cal4;
	cout<<"\n";
	cout<<"Ingrese el nombre del estudiante 12: "; cin>>est12.nombre;
	cout<<"Ingrese lacalificacion NO.1: ";cin>>est12.cal1;
	cout<<"Ingrese lacalificacion NO.2: ";cin>>est12.cal2;
	cout<<"Ingrese lacalificacion NO.3: ";cin>>est12.cal3;
	cout<<"Ingrese lacalificacion NO.4: ";cin>>est12.cal4;
	cout<<"\n";
	cout<<"Ingrese el nombre del estudiante 13: "; cin>>est13.nombre;
	cout<<"Ingrese lacalificacion NO.1: ";cin>>est13.cal1;
	cout<<"Ingrese lacalificacion NO.2: ";cin>>est13.cal2;
	cout<<"Ingrese lacalificacion NO.3: ";cin>>est13.cal3;
	cout<<"Ingrese lacalificacion NO.4: ";cin>>est13.cal4;
	cout<<"\n";
	cout<<"Ingrese el nombre del estudiante 14: "; cin>>est14.nombre;
	cout<<"Ingrese lacalificacion NO.1: ";cin>>est14.cal1;
	cout<<"Ingrese lacalificacion NO.2: ";cin>>est14.cal2;
	cout<<"Ingrese lacalificacion NO.3: ";cin>>est14.cal3;
	cout<<"Ingrese lacalificacion NO.4: ";cin>>est14.cal4;
	cout<<"\n";
	cout<<"Ingrese el nombre del estudiante 15: "; cin>>est15.nombre;
	cout<<"Ingrese lacalificacion NO.1: ";cin>>est15.cal1;
	cout<<"Ingrese lacalificacion NO.2: ";cin>>est15.cal2;
	cout<<"Ingrese lacalificacion NO.3: ";cin>>est15.cal3;
	cout<<"Ingrese lacalificacion NO.4: ";cin>>est15.cal4;
	cout<<"\n";
	
	pg=(est1.cal1+est1.cal2+est1.cal3+est1.cal4+est2.cal1+est2.cal2+est2.cal3+est2.cal4+est3.cal1+est3.cal2+est3.cal3+est3.cal4+est4.cal1+est4.cal2+est4.cal3+est4.cal4+est5.cal1+est5.cal2+est5.cal3+est5.cal4+
	est6.cal1+est6.cal2+est6.cal3+est6.cal4+est7.cal1+est7.cal2+est7.cal3+est7.cal4+est8.cal1+est8.cal2+est8.cal3+est8.cal4+est9.cal1+est9.cal2+est9.cal3+est9.cal4+est10.cal1+est10.cal2+est10.cal3+est10.cal4+
	est11.cal1+est11.cal2+est11.cal3+est11.cal4+est12.cal1+est12.cal2+est12.cal3+est12.cal4+est13.cal1+est13.cal2+est13.cal3+est13.cal4+est14.cal1+est14.cal2+est14.cal3+est14.cal4+est15.cal1+est15.cal2+est15.cal3+est15.cal4)/60;
	
	float pr1= (est1.cal1+est1.cal2+est1.cal3+est1.cal4)/4;
	float pr2= (est2.cal1+est2.cal2+est2.cal3+est2.cal4)/4;
	float pr3= (est3.cal1+est3.cal2+est3.cal3+est3.cal4)/4;
	float pr4= (est4.cal1+est4.cal2+est4.cal3+est4.cal4)/4;
	float pr5= (est5.cal1+est5.cal2+est5.cal3+est5.cal4)/4;
	float pr6= (est6.cal1+est6.cal2+est6.cal3+est6.cal4)/4;
	float pr7= (est7.cal1+est7.cal2+est7.cal3+est7.cal4)/4;
	float pr8= (est8.cal1+est8.cal2+est8.cal3+est8.cal4)/4;
	float pr9= (est9.cal1+est9.cal2+est9.cal3+est9.cal4)/4;
	float pr10= (est10.cal1+est10.cal2+est10.cal3+est10.cal4)/4;
	float pr11= (est11.cal1+est11.cal2+est11.cal3+est11.cal4)/4;
	float pr12= (est12.cal1+est12.cal2+est12.cal3+est12.cal4)/4;
	float pr13= (est13.cal1+est13.cal2+est13.cal3+est13.cal4)/4;
	float pr14= (est14.cal1+est14.cal2+est14.cal3+est14.cal4)/4;
	float pr15= (est15.cal1+est15.cal2+est15.cal3+est15.cal4)/4;
	
	pr[0]=0;
	pr[1]=pr1;
	pr[2]=pr2;
	pr[3]=pr3;
	pr[4]=pr4;
	pr[5]=pr5;
	pr[6]=pr6;
	pr[7]=pr7;
	pr[8]=pr8;
	pr[9]=pr9;
	pr[10]=pr10;
	pr[11]=pr11;
	pr[12]=pr12;
	pr[13]=pr13;
	pr[14]=pr14;
	pr[15]=pr15;
	
	for(int i=1;i<=15;i++){
		a=pr[i];
		if (a<5){
			acu=acu+a;
			cont++;
		}
	}
	float prm =acu/cont;
	SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_BLUE| FOREGROUND_RED|FOREGROUND_INTENSITY);
		m=0;
		for(int i=1;i<=15;i++){
		if (pr[i]>m){
			m=pr[i];
			}
			}
		me=m;
		for(int i=1;i<=15;i++){
		if (pr[i]<me){
			me=pr[i];
		}
	}
	
		cout<<fixed<< setprecision(2);
	for(int i=1;i<16;i++){
		switch(i){
				case 1:
				cout<<"\nEl Promedio de "<<est1.nombre<<" es: "<< pr[i];
				break;
				case 2:
				cout<<"\nEl Promedio de "<<est2.nombre<<" es: "<< pr[i];
				break;
				case 3:
				cout<<"\nEl Promedio de "<<est3.nombre<<" es: "<< pr[i];
				break;
				case 4:
				cout<<"\nEl Promedio de "<<est4.nombre<<" es: "<< pr[i];
				break;
				case 5:
				cout<<"\nEl Promedio de "<<est5.nombre<<" es: "<< pr[i];
				break;
				case 6:
				cout<<"\nEl Promedio de "<<est6.nombre<<" es: "<< pr[i];
				break;
				case 7:
				cout<<"\nEl Promedio de "<<est7.nombre<<" es: "<< pr[i];
				break;
				case 8:
				cout<<"\nEl Promedio de "<<est8.nombre<<" es: "<< pr[i];
				break;
				case 9:
				cout<<"\nEl Promedio de "<<est9.nombre<<" es: "<< pr[i];
				break;
				case 10:
				cout<<"\nEl Promedio de "<<est10.nombre<<" es: "<< pr[i];
				break;
				case 11:
				cout<<"\nEl Promedio de "<<est11.nombre<<" es: "<< pr[i];
				break;
				case 12:
				cout<<"\nEl Promedio de "<<est12.nombre<<" es: "<< pr[i];
				break;
				case 13:
				cout<<"\nEl Promedio de "<<est13.nombre<<" es: "<< pr[i];
				break;
				case 14:
				cout<<"\nEl Promedio de "<<est14.nombre<<" es: "<< pr[i];
				break;
				case 15:
				cout<<"\nEl Promedio de "<<est15.nombre<<" es: "<< pr[i];
				break;
		} 
	}
	
	SetConsoleTextAttribute(h, FOREGROUND_GREEN |FOREGROUND_INTENSITY);
	cout<<"\n\n\tResultados\n";
	SetConsoleTextAttribute(h, FOREGROUND_RED |FOREGROUND_INTENSITY);
	cout<<"\n\nEl promedio general de todas las calificaciones es: "<<pg;
	cout<<"\nEl promedio de las calificaciones menores de 5 son: "<<prm;
	
	for(int i=1;i<16;i++){
		if (me==pr[i]){
		switch(i){
				case 1:
				cout<<"\nEl Promedio menor es de "<<est1.nombre<<" con "<<me;
				break;
				case 2:
				cout<<"\nEl Promedio menor es de "<<est2.nombre<<" con "<<me;
				break;
				case 3:
				cout<<"\nEl Promedio menor es de "<<est3.nombre<<" con "<<me;
				break;
				case 4:
				cout<<"\nEl Promedio menor es de "<<est4.nombre<<" con "<<me;
				break;
				case 5:
				cout<<"\nEl Promedio menor es de "<<est5.nombre<<" con "<<me;
				break;
				case 6:
				cout<<"\nEl Promedio menor es de "<<est6.nombre<<" con "<<me;
				break;
				case 7:
				cout<<"\nEl Promedio menor es de "<<est7.nombre<<" con "<<me;
				break;
				case 8:
				cout<<"\nEl Promedio menor es de "<<est8.nombre<<" con "<<me;
				break;
				case 9:
				cout<<"\nEl Promedio menor es de "<<est9.nombre<<" con "<<me;
				break;
				case 10:
				cout<<"\nEl Promedio menor es de "<<est10.nombre<<" con "<<me;
				break;
				case 11:
				cout<<"\nEl Promedio menor es de "<<est11.nombre<<" con "<<me;
				break;
				case 12:
				cout<<"\nEl Promedio menor es de "<<est12.nombre<<" con "<<me;
				break;
				case 13:
				cout<<"\nEl Promedio menor es de "<<est13.nombre<<" con "<<me;
				break;
				case 14:
				cout<<"\nEl Promedio menor es de "<<est14.nombre<<" con "<<me;
				break;
				case 15:
				cout<<"\nEl Promedio menor es de "<<est15.nombre<<" con "<<me;
				break;
		}} 
	}
	
	for(int i=1;i<16;i++){
		if (m==pr[i]){
		switch(i){
				case 1:
				cout<<"\nEl Promedio mayor es de "<<est1.nombre<<" con "<<m;
				break;
				case 2:
				cout<<"\nEl Promedio mayor es de "<<est2.nombre<<" con "<<m;
				break;
				case 3:
				cout<<"\nEl Promedio mayor es de "<<est3.nombre<<" con "<<m;
				break;
				case 4:
				cout<<"\nEl Promedio mayor es de "<<est4.nombre<<" con "<<m;
				break;
				case 5:
				cout<<"\nEl Promedio mayor es de "<<est5.nombre<<" con "<<m;
				break;
				case 6:
				cout<<"\nEl Promedio mayor es de "<<est6.nombre<<" con "<<m;
				break;
				case 7:
				cout<<"\nEl Promedio mayor es de "<<est7.nombre<<" con "<<m;
				break;
				case 8:
				cout<<"\nEl Promedio mayor es de "<<est8.nombre<<" con "<<m;
				break;
				case 9:
				cout<<"\nEl Promedio mayor es de "<<est9.nombre<<" con "<<m;
				break;
				case 10:
				cout<<"\nEl Promedio mayor es de "<<est10.nombre<<" con "<<m;
				break;
				case 11:
				cout<<"\nEl Promedio mayor es de "<<est11.nombre<<" con "<<m;
				break;
				case 12:
				cout<<"\nEl Promedio mayor es de "<<est12.nombre<<" con "<<m;
				break;
				case 13:
				cout<<"\nEl Promedio mayor es de "<<est13.nombre<<" con "<<m;
				break;
				case 14:
				cout<<"\nEl Promedio mayor es de "<<est14.nombre<<" con "<<m;
				break;
				case 15:
				cout<<"\nEl Promedio mayor es de "<<est15.nombre<<" con "<<m;
				break;
		}} 
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
