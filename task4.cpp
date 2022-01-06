#include <iostream>
using namespace std;
void f(const double& x, double& result);

void main()
{
	double x,ff;
	x = 5;

	f(x, ff);
	setlocale(LC_ALL, "Russian");
	cout << "x = " << x;
	cout << "\nf = " << ff;
	cout << "\n¬ведите x: ";
	cin >> x;
	f(x, ff);
	cout << "\nf = " << ff;
}
void f(const double& x, double& result)
{
	result = (1 / (sqrt(x) + sqrt(2)));
}