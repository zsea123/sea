#include<iostream>
using namespace std;
#include"mytriangle.h"
int main()
{
	cout << "���������������߳�" << endl;
	int a, b, c;
	cin >> a >> b >> c;
	if (is_valid(a, b, c))
	{

		cout<<"�����ε�����ǣ�" << area(a, b, c) << endl;
	}
	else
		cout << "�޷�����������" << endl;

}