#include <iostream>
using namespace std;
int main()
{
    int mes,dias,a;
char x,c;
    do{
    cout<<"ingrese el mes y el a"<<char(164)<<"o"<<endl;
    cin>>mes>>a;
 
switch (mes)
{
case 1: case 3: case 5: case 7: case 8: case 10: case 12:
dias = 31;
break;
case 4: case 6: case 9: case 11:
dias = 30;
break;
case 2:
if(a%4==0){

dias = 29;
 }   else
dias=28;
break;
default:
printf("El mes no es valido\n");
break;
}
cout<<dias<<endl;
cin.ignore();
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
  
