#include <iostream>

using namespace std;

int main()
{
	int n, a[50][50], i, j, S = 0;
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
			if (i <= j)
				S = S + a[i][j];
		}
	}

	cout << "S = " << S;
}