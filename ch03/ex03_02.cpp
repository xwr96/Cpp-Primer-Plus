#include<iostream>
using namespace std;
const double inch_per_feet = 12;
const double meter_per_inch = 0.0254;
const double boung_per_kg = 2.2;
int main()
{
	double  feet, inch, b;   //foot为英尺，inch为英寸，b为磅
	double hm, kg;       //hm为米，kg为千克
	cout << "please input your height in foot and inch:";
	cin >> feet >> inch;
	cout << "please input your weight in bound:";
	cin >> b;
	inch = inch_per_feet * feet + inch;
	cout << "your height is" << inch << endl;
	hm = inch*meter_per_inch;
	cout << "your height is " << hm << "meters " << endl;
	kg = b / boung_per_kg;
	double BMI = (kg) / ((hm) * (hm));
	cout << "your Body Mass Index is" << BMI << endl;
	return 0;
}
