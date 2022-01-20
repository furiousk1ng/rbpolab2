#include <iostream>
#include "func.h"
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
	cout << "x = " << x << endl;
	f();
	cout << "f = " << result << endl;
	cout << "¬ведите x: " << endl;
	cin >> x;
	f();
	cout << "f = " << result << endl;

}