#include <iostream>
using namespace std;
extern double x, result;
void f();
void main()
{
	x = 5;
	setlocale(LC_ALL, "Russian");
	cout << "x = " << x << endl;
	f();
	cout << "f = " << result << endl;
	cout << "¬ведите x: " << endl;
	cin >> x;
	f();
	cout << "f = " << result << endl;

}