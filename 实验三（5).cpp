#include<iostream>
using namespace std;
int monkey(int n)
{
	
	int num;
	if (n == 10)
	{
		num = 1;
	}
	else
	{
		num = 2 * (monkey(n + 1) + 1);
		return num;
	}
}
int main() 
{
	cout << "¹²ÓĞÌÒ×Ó" << monkey(1) << endl;
}