#include<iostream>
using namespace std;
int main()
{

	int a[10];
	
	for (int i = 0; i < 10; i++)
		cin >> a[i];
	cout << a[0] << " ";
	for (int m = 1; m < 10; m++)
	{
		for (int j = 0; j < m; j++)
		{
			if (a[m] != a[j])
			{
				if (j == m - 1)
					cout << a[m] << " ";
				else
					continue;
			}
			else
				break;
		}
	}

	return 0;
}