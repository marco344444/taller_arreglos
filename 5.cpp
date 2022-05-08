#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
int main() {
//variables para los nombres
    int aux=0,empl=0;
// Variables para los gastos
//mesp=mes pasado
    float mes[100],mesp[100],comp[100],gasto[100],kw;
//Almacenamiento de nombres
    string nombres[100];
    string apellidos[100];
//Bienvenida al sistema
    cout<<"\n Sistema de calculo de gastos de luz \n";
	//Datos del empleado y el kw
    while(empl<=0)
    {
        cout<<"Ingrese el total de ususarios: ";cin>>empl;
    }
    cout<<"Ingrese el valor por kw: ";cin>>kw;
    for(int i=0;i<empl;i++)
    {
        //Ingreso de datos del estudiante
        cout<<"\nIngrese el nombre del usuario: ";cin>>nombres[i];
        cout<<"Ingrese los apellidos del usuario: ";cin>>apellidos[i];

        //Ingreso de gastos de kw
        cout<<"\n Ingrese los KW gastados por el usuario el mes: ";cin>>mes[i];
        cout<<"\n Ingrese los KW gastados por el usuario el mes pasado: ";cin>>mesp[i];
        //Calculo de gasto
        gasto[i]=kw*((mes[i])+(mesp[i]));
		comp[i]=mes[i]+mesp[i];  
    }
    for(int i=0;i<empl;i++)
    {
        cout<<"\nUsuario: "<<nombres[i]<<" "<<apellidos[i]<<endl;
        cout<<"Consumo total: "<<mes[i]+mesp[i]<<endl;
        cout<<"Gasto total a pagar: "<<gasto[i]<<endl;
    }
    return 0;
}
