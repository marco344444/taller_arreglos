#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int array1[100],array2[100],cant,acum;
	//recorrido del ambos vectores
	cout<<"\n vector 1 "<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<"Ingrese el elemento "<<i+1<<": ";
		cin>>array1[i];		
	}
	//asignación
	for(int i=0;i<10;i++)
	{
		if(array1[i]%2==0){
			array2[i]=pow(array1[i],2);
		}
		else{
			array2[i]=pow(array1[i],3);
		}	
	}
	//impresión
	cout<<"\n";
	cout<<" Vector del usuario: ";
	for(int i=0;i<10;i++)
	{	
		cout<<" "<<array1[i]<<" ";				
	}
	cout<<"\n";
	cout<<" Vector asignado: ";
	for(int i=0;i<10;i++)
	{		
		cout<<" "<<array2[i]<<" ";	
	}
	return 0;
}
