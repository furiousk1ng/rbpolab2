#include <iostream>
#include <cmath>
#include "func.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "x = " << x << endl;
	f();
	cout << "f = " << result << endl;
	cout << "Vvod x: " << endl;
	cin >> x;
	f();
	cout << "f = " << result << endl;

}