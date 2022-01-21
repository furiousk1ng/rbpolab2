#include <iostream>
#include <cmath>

using namespace std;
int main()
{

	double x = 5;
	double f = 1 / (sqrt(x) + sqrt(2));
	cout << "x = " << x;
	cout <<"\nf = "<< f;
	cout << "\nVvod x: ";
	cin >> x;
	f = 1 / (sqrt(x) + sqrt(2));
	cout << "\nf = " << f;

}