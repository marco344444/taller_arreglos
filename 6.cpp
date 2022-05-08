//Programa para rellenar una matriz e imprimirla
#include<iostream>
using namespace std;                                                                          
int main()
{
    int filas, columnas; 
	int numeros[filas][columnas];
    
    cout<<"digite la cantidad de filas de su matriz: ";
    cin>>filas;
    cout<<"digite la cantidad de columnas de su matriz: ";
    cin>>columnas;

    //Almacenamiento de datos
    for(int i=0;i<filas;i++)
	{
        for(int j=0;j<columnas;j++)
		{
            cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
            cin>>numeros[i][j];
        }
    }
    //Mostrando la matriz    
    for (int i=0;i<filas;i++){
    for(int j=0;j<columnas;j++){
    	cout<<" "<<numeros[i][j];
	}
	cout<<"\n";
	}
    return 0;
}
