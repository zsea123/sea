#include<iostream>
using namespace std;
int gys(int, int);
int gbs(int, int);
int main()
{
	cout << "请输入两个自然数" << endl;
	int a, b;
	cin >> a >> b;
	cout << "它们的最大公约数是" <<gys(a,b)<<endl;
	cout << "它们的最小公倍数是" <<gbs(a,b) << endl;

	system("pause");
	return 0;
}
int gys(int b, int a)
{
	int c;
	if (a < b)
	{
		int temp;
		temp = a;
		a = b;
		b = temp;
	}
		while ( b != 0)
		{
			c = a % b;
			a = b;
			b = c;
		}
		return a;
}
	int gbs(int a, int b)
	{
		int c;
		c = gys(a, b);
		int d;
		d = a * b / c;
		return d;
	
	}