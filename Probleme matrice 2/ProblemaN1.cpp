#include <iostream>

using namespace std;

int main()
{
	int n, a[50][50], i, j;
	int sumaN = 0, produsS = 1, sumaV = 0, nrV = 0, nulE = 0;
	int e[50][50], f[50][50], g[50][50], h[50][50];
	cout << "n = "; cin >> n;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
	}

	//a
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (j > i && j <= n - i)  //NORD
				sumaN = sumaN + a[i][j];
		}
	}

	cout << "Suma Nord = " << sumaN << endl;


	//b
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (j < i && j > n - i + 1)  //SUD
				produsS = produsS * a[i][j];
		}
	}


	cout << "Produs Sud = " << produsS << endl;


	//c
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (j < i && j <= n - i)  //VEST
			{
				sumaV = sumaV + a[i][j];
				nrV++;
			}
		}
	}

	cout << "Media aritmetica Vest = " << sumaV / nrV << endl;


	//d
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (j > i && j > n - i + 1)  //EST
				if (a[i][j] == 0)
					nulE++;
		}
	}

	cout << "Nr. elemente nule Vest = " << nulE << endl;


	//e
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (i != j)
			{
				e[i][j] = a[j][i];
			}
			else
			{
				e[i][j] = a[i][j];
			}
		}
	}

	cout << "Matricea simetrica fata de diagonala principala:"<< endl;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			cout << e[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	//f
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (j != n - i + 1)
			{
				f[i][j] = a[n - j + 1][n - i + 1];
			}
			else
			{
				f[i][j] = a[i][j];
			}
		}
	}

	cout << "Matricea simetrica fata de diagonala secundara:" << endl;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			cout << f[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	//g
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			g[i][j] = a[n - i + 1][j];
		}
	}

	cout << "Matricea simetrica fata de axa orizontala:" << endl;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			cout << g[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;


	//h
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			h[i][j] = a[i][n - j + 1];
		}
	}

	cout << "Matricea simetrica fata de axa verticala:" << endl;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			cout << h[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}
