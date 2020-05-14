#include <iostream>

using namespace std;

int main()
{
	int a[10][10], m, n, i, j, min;

	cout << "m = "; cin >> m;
	cout << "n = "; cin >> n;

	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= n; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
	}

	for (i = 1; i <= m; i++)
	{
		min = a[i][1];
		for (j = 1; j <= n; j++)
		{
			if (a[i][j] < min)
				min = a[i][j];
		}
		cout << min << " ";
	}
}
