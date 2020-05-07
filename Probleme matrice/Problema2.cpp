#include <iostream>

using namespace std;

int main()
{
	int n, a[50][50], ok = 1, i, j;
	cout << "n = "; cin >> n;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
	}

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (i > j && a[i][j] != 0)
				ok = 0;
		}
	}

	if (ok == 1)
		cout << "Este triunghiulara superior";
	else
		cout << "Nu uste triunghiulara superior";
}
