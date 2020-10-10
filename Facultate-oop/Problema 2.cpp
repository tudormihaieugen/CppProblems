#include <iostream.h>

void citire_matrice(int m, int n, float a[2][2]);
void afisare_matrice(int m, int n, float a[2][2]);

/*void main()
{
	float a[4][4];
	citire_matrice(4,4,a);
	afisare_matrice(4,4,a);
}
*/

void citire_matrice(int m, int n, float a[2][2])
{
	int i,j;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		{
			cout<<"a["<<i<<"]["<<j<<"]=";
			cin>>a[i][j];
		}
}

void afisare_matrice(int m, int n, float a[2][2])
{
	int i,j;
	for(i=0;i<m;i++)
	{	for(j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}