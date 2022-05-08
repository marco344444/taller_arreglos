#include <iostream>
using namespace std;
int main(){
    int n,i,mul,acum;
int arreglo1[n];
int arreglo2[n];
int arreglo3[n];
cout<<"de que tamaño quiere los arreglos: ";
cin>>n;
acum=n-1;

for(i=0;i<n;i++){
cout<<"escriba la posicion "<<i<<" de su arreglo 1: ";
cin>>arreglo1[i];

cout<<"escriba la posicion "<<i<<" de su arreglo 2: ";
cin>>arreglo2[i];
}
for(i=0;i<n;i++){
	arreglo3[i]=arreglo1[i]*arreglo2[acum];
	acum--;
}

	cout<<"\n";
	cout<<"Primer arreglo: ";
	for(int i=0;i<n;i++)
	{	
		cout<<" "<<arreglo1[i]<<" ";				
	}
	cout<<"\n";
	cout<<"Segundo arreglo: ";
	for(int i=0;i<n;i++)
	{		
		cout<<" "<<arreglo2[i]<<" ";	
	}
	cout<<"\n";
	cout<<"Tercer arreglo producto  arreglo: ";
	for(int i=0;i<n;i++)
	{		
		cout<<" "<<arreglo3[i]<<" ";	
	}
return 0;
}


