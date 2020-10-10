#include <iostream.h>

int main()
{
	int m=4, n=4, a[100][100];
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			cin>>a[i][j];

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
