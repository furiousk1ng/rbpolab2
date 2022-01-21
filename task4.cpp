#include <iostream>
#include <cmath>
using namespace std;
void f(const double& x, double& result);

int main()
{
	double x,ff;
	x = 5;

	f(x, ff);
	cout << "x = " << x;
	cout << "\nf = " << ff;
	cout << "\nVvod x: ";
	cin >> x;
	f(x, ff);
	cout << "\nf = " << ff;
}
void f(const double& x, double& result)
{
	result = (1 / (sqrt(x) + sqrt(2)));
}