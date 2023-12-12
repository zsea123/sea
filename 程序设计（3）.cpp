#include<iostream>
using namespace std;
void arrange(int p[], int size)
{
	int temp;
	for (int i = 0; i < size; i++)
	{
		for (int m = 0; m < size - 1; m++)
		{
			if (*(p + m) > *(p + m + 1))
			{
				temp = *(p + m);
				*(p + m) = *(p + m + 1);
				*(p + m + 1) = temp;
			}
		}
	}

}
int main()
{
	int a, size;
	int* p = new int[size];
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cin >> *(p + i);
	}
	cin >> a;
	cout << "p[" << a - 1 << "]=" << *(p + a - 1) << endl;
	arrange(p, size);
	for (int i = 0; i < size; i++)
	{
		cout << *(p + i) << " "  ;

	}
	delete p;
	return 0;
}