#include <iostream>
#include "funcc.h"
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
	cout << "x = " << x << endl;
	Filinov::f();
	cout << "f = " << result << endl;
	cout << "¬ведите x: " << endl;
	cin >> x;
	Filinov::f();
	cout << "f = " << result << endl;

}