#include<iostream>

using namespace std;

int main()
{
	int dis;
	cout << "请输入以long为单位的距离：";
	cin >> dis;
	cout << "把单位转换为码：" << 220 * dis << endl;
	return 0;
}
