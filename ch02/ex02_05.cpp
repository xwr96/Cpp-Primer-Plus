#include <iostream>
using namespace std;

int Huashi(double c)
{
	double h;
	h = 1.8 * c + 32.0;
	return h;
}
int main()
{
	double c1;
	cout << "Please enter a Celsius value:";
	cin >> c1;
	cout << endl;
	cout << c1 << " degrees Celsius is " << Huashi(c1) << " degrees Fahrenheit." << endl;
	return 0;
}
