#include<iostream>
using namespace std;
int gys(int, int);
int gbs(int, int);
int main()
{
	cout << "������������Ȼ��" << endl;
	int a, b;
	cin >> a >> b;
	cout << "���ǵ����Լ����" <<gys(a,b)<<endl;
	cout << "���ǵ���С��������" <<gbs(a,b) << endl;

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