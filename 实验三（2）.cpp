#include<iostream>
using namespace std;
bool is_prime(int num)
{
	for (int w = 2; w < num; w++)
	{
		if (num % w == 0)
			return false;
	}
	return true;
}
int main()
{
	int sum = 0;
	for (int i = 2; ;i++ )
	{
		
		if (is_prime(i))
		{
			sum++;
			cout << i << " ";


			if (sum % 10 == 0)
			{
				cout << endl;
			}
		}
		if (sum >= 200)
		{
			break;
		}
	}
}