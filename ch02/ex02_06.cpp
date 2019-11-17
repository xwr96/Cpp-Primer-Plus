#include <iostream>
using namespace std;
double change(double n);//函数原型
int main()
{
	cout << "Enter the number of light years: ";        //打印提示信息
	double ly;         //定义变量，存储光年
	cin >> ly;          //输入数据
	cout << ly << " light years = " << change(ly) << " astronomical units." << endl;    //打印结果
	return 0;
}

double change(double n)        //定义函数
{
	return n * 63240;
}
