#include<iostream>
using namespace std;
int indexOf(const char s1[], const char s2[])
{
	int a, b, index;
	a = strlen(s1);
	b = strlen(s2);
	for (int i = 0; i < b; i++)
	{
		for (int j = 0, k = i; j < a && k < a; j++, k++)
		{
			if (s1[i] == s2[j])
			{
				index = i;
				return index + 1;
			}
			else
				return -1; break;

		}
	}

}
int main()
{
	const int size = 9999;
	char s1[size], s2[size];
	cin.getline(s1, size);
	cin.getline(s2, size);
	cout << indexOf(s1, s2) << endl;




}