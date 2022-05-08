#include <iostream>
using namespace std;
int main(){
    int n,i,j ;
    float p;
int numero[n];
int menor[j];
int mayor[j];
cout<<"ingrese el tamano del vector: ";
cin>>n;
for (i=0;i<n;i++){
	cout<<i+1<<". ingrese un numero para la posicion del vector: ";
	cin>>numero[i];	
	p+=numero[i];	
}
	p=p/n;
	cout<<"el promedio del vector es: "<<p<<endl;
for (i=0;i<n;i++){
			if (numero[i]>p){
		mayor[j]=numero[i];
		cout<<"los numeros mayores al promedio son: "<<mayor[j]<<endl;
	}
	else{
		menor[j]=numero[i];
		cout<<"los numeros menores o iguales al promedio son: "<<menor[j]<<endl;
	}
}
    return 0;
}
