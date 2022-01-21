#include <iostream>
#include <cmath>
using namespace std;
double f(double x);
int main()
{
	double x = 5;
	cout << "x = " << x;
	cout << "\nf = " << f(x);
	cout << "\nVvod x: ";
	cin >> x;
	cout << "\nf = " << f(x);
}
double f(double x)
{
	return (1 / (sqrt(x) + sqrt(2)));
}
