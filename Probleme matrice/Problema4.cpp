#include <iostream>

using namespace std;

int main()
{
	int n, i, j, a[100][100];
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
			if (i == 1 && j == 1) //Colt stanga sus
			{
				if (a[i][j] < a[i + 1][j] && a[i][j] < a[i][j + 1])
					cout << a[i][j] << " ";
			}
			else if (i == 1 && j == n) //Colt dreapta sus
			{
				if (a[i][j] < a[i + 1][j] && a[i][j] < a[i][j - 1])
					cout << a[i][j] << " ";
			}
			else if (i == n && j == 1) //Colt stanga jos
			{
				if (a[i][j] < a[i - 1][j] && a[i][j] < a[i][j + 1])
					cout << a[i][j] << " ";
			}
			else if (i == n && j == n) //Colt dreapta jos
			{
				if (a[i][j] < a[i - 1][j] && a[i][j] < a[i][j - 1])
					cout << a[i][j] << " ";
			}
			else if (i == 1) //Prima linie
			{
				if (a[i][j] < a[i + 1][j] && a[i][j] < a[i][j + 1] && a[i][j] < a[i][j - 1])
					cout << a[i][j] << " ";
			}
			else if (i == n) //Ultima linie
			{
				if (a[i][j] < a[i - 1][j] && a[i][j] < a[i][j - 1] && a[i][j] < a[i][j + 1])
					cout << a[i][j] << " ";
			}
			else if (j == 1) //Prima coloana
			{
				if (a[i][j] < a[i - 1][j] && a[i][j] < a[i + 1][j] && a[i][j] < a[i][j + 1])
					cout << a[i][j] << " ";
			}
			else if (j == n) //Ultima coloana
			{
				if (a[i][j] < a[i - 1][j] && a[i][j] < a[i + 1][j] && a[i][j] < a[i][j - 1] )
					cout << a[i][j] << " ";
			}
			else //Interiorul
			{
				if (a[i][j] < a[i - 1][j] && a[i][j] < a[i + 1][j] && a[i][j] < a[i][j - 1] && a[i][j] < a[i][j + 1])
					cout << a[i][j] << " ";
			}
		}
	}
}