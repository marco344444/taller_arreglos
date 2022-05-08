#include<iostream>
using namespace std;
int main()
{
	int primos[50],noprimos[50],acum;
	for(int i=1;i<=50;i++)
	{
		acum=0;
		for(int k=1;k<=i;k++)
		{
			if(i%k==0)
			{
				acum++;
			}				
		}
		if(acum==2)
		{
			primos[i]=i;
			noprimos[i]=0;
		}
		else
		{
			noprimos[i]=i;
			primos[i]=0;	
		}
	}
	cout<<"Numeros primos: "<<endl;

	for(int i=1;i<=50;i++)
	{
		if(primos[i]>0)
		{
			cout<<" "<<primos[i]<<" ";
		}
	}
	cout<<"\n";
	cout<<"Numeros no primos: "<<endl;
	for(int i=1;i<=50;i++)
	{
		if(noprimos[i]>0)
		{
			cout<<" "<<noprimos[i]<<" ";
		}
	}
	return 0;
}
