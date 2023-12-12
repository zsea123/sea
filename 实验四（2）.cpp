#include<iostream>
using namespace std;
void px(double list[10]) 
{
	bool changed = true;
	do {
		 changed = false;
		for (int j = 0; j < 9; j++)
		{

			double a;
			if (list[j] > list[j + 1])
			{
				a = list[j];
				list[j] = list[j + 1];
				list[j + 1] = a;
				changed = true;
			}
		}
	} while (changed);
}
int main()
{
	double list[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> list[i];
	}
	px(list);
	for (int j = 0; j < 10; j++)
	{
		cout << list[j] << " ";
	}
	return 0;
}