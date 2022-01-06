#include <iostream>
#include "locale.h"
using namespace std;
double f(double x)
{
	return (1 / (sqrt(x) + sqrt(2)));
}
void main()
{
	setlocale(LC_ALL, "Russian");
	double x = 5;
	cout << "x = " << x;
	cout <<"\nf = "<<f(x);
	cout << "\n¬ведите x: ";
	cin >> x;
	cout << "\nf = " << f(x);
}
