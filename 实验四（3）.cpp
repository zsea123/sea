#include<iostream>
using namespace std;
int main()
{
	bool desk[100];
	for (int i = 0; i < 100; i++)
	{
		desk[i] = true;
	}
	for (int i = 1; i < 100; i++)
	{
		for (int j = i; j < 100; j=j+i+1)
		{
			if (desk[j] == true)
				desk[j] = false;
			else
				desk[j] = true;

		}
	}
	for (int i = 0; i < 100; i++)
	{
		if (desk[i] == true)
			cout << i + 1 << endl;
	}
	return 0;
}