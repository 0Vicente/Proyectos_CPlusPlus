#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int b=1,c=1,x=1,n=1;
	
	cout<<"For\n";
	 for (b=1;b<=12;b++){
	 for (c=1;c<=12;c++){
	 	cout<<b*c<<" ";
	 }
	 cout<<"\n";
	 }
	cout<<"\nWhile\n";
	x=1;
	while(x<=12){
		n=1;
		while(n<=12){
			cout<<n*x<<" ";
			n++;
		}
		cout<<"\n";
		x++;
	}
	 cout<<"\nDO While\n";
	x=1;
	do{
		n=1;
	do	{
			cout<<n*x<<" ";
			n++;
		}while(n<=12);
		cout<<"\n";
		x++;
	}while(x<=12);
	
		system("pause");
	return 0;
}
