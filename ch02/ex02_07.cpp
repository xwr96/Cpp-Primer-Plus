#include <iostream>
using namespace std;
void print_time(int h, int m);  //函数原型
int main()
{
	cout << "Enter the number of hours: ";    //打印提示信息
	int hours;  //定义变量，存储小时数
	cin >> hours;    //输入小时数
	cout << "Enter the number of minutes: ";     //打印提示信息
	int minutes;         //定义变量，存储分钟数
	cin >> minutes;         //输入分钟数
	print_time(hours, minutes);      //调用函数
	return 0;
}

void print_time(int h, int m)   //定义函数
{
	cout << "Time: " << h << ":" << m << endl;
}
