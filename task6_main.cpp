#include <iostream>
using namespace std;

double f(double x);
void main()
{
	setlocale(LC_ALL, "Russian");
	double x = 5;
	cout << "x = " << x << endl;
	cout << "f = " << f(x) << endl;
	cout << "¬ведите x: " << endl;
	cin >> x;
	cout << "f = " << f(x) << endl;
}