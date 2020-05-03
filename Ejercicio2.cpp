#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int a[10];
	int i, acum=0, media, superiores;
	for(i=0;i<10;i++){
		cout<<"Venta \t"<<i+1<<"\t"<<endl;
		cin>>a[i];
		acum+=a[i];
		media=acum/10;
	if(a[i]>media){
		media=a[i];
		superiores=i+1;
	}
	}
	cout<<"La media de las ventas es "<<media<<", las ventas superiores a dicha media fueron: "<<superiores<<endl;
	system("PAUSE");
	return 0;
	
}
