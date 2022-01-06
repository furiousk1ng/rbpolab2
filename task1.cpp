#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
	double x = 5;
	double f = 1 / (sqrt(x) + sqrt(2));
	cout << "x = " << x;
	cout <<"\nf = "<< f;
	cout << "\n¬ведите x: ";
	cin >> x;
	f = 1 / (sqrt(x) + sqrt(2));
	cout << "\nf = " << f;

}