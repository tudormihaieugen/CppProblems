#include <iostream.h>

#include <C:\Tudor Mihai Eugen\Problema 2.cpp>

void citire_tab(int m, float tab[2]);

/*
void main()
{
	float tab[4], a[4][4], rez[4];
	citire_tab(4,tab);
	citire_matrice(4,4,a);

	for(int i=0;i<4;i++)
	{
		rez[i]=tab[i]+a[i][i];
		cout<<rez[i]<<" ";
	}

}
*/

void citire_tab(int m, float tab[4])
{
	for(int i=0;i<m;i++)
	{
		cout<<"tab["<<i<<"]=";
		cin>>tab[i];
	}
}
