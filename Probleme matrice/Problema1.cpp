#include <iostream>

using namespace std;

int main()
{
	int n, a[30][30], i, j, P = 1, ok = 1, min[30];
	cout << "n = "; cin >> n;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
	}

	for (j = 1; j <= n; j++)
	{
		min[j] = a[1][j];
		for (i = 1; i <= n; i++)
		{
			if (min[j] > a[i][j])
				min[j] = a[i][j];
		}
	}

	for (i = 1; i <= n; i++)
	{
		if (a[n - i + 1][i] == min[i])
		{
			P = P * min[i];
			ok = 0;
		}
	}

	if (ok == 1)
		cout << "NU EXISTA";
	else
		cout << "u(P) = " << P % 10 << endl;
}
