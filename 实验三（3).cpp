#include<iostream>
using namespace std;
#include"mytriangle.h"
int main()
{
	cout << "请输入三角形三边长" << endl;
	int a, b, c;
	cin >> a >> b >> c;
	if (is_valid(a, b, c))
	{

		cout<<"三角形的面积是：" << area(a, b, c) << endl;
	}
	else
		cout << "无法构成三角形" << endl;

}