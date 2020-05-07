#include <iostream>

using namespace std;

int main()
{
	int n, a[20][20], i, j;
	double m1 = 0, m2 = 0;
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
			if (i < j && a[i][j] > 0)
				m1 = m1 + a[i][j];

			if (i > j && a[i][j] > 0)
				m2 = m2 + a[i][j];
		}
	}

	cout << "m1 = " << m1 / n << endl;
	cout << "m2 = " << m2 / n;
}