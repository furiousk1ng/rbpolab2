#include <iostream>
#include <cmath>
using namespace std;

double f(double x);
int main()
{

	double x = 5;
	cout << "x = " << x << endl;
	cout << "f = " << f(x) << endl;
	cout << "Vvod x: " << endl;
	cin >> x;
	cout << "f = " << f(x) << endl;
}