#include <iostream>
#include <cmath>
#include "funcc.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "x = " << x << endl;
	Filinov::f();
	cout << "f = " << result << endl;
	cout << "Vvod x: " << endl;
	cin >> x;
	Filinov::f();
	cout << "f = " << result << endl;

}