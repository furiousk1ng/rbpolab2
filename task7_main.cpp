#include <iostream>
#include "task7_func.cpp"
using namespace std;
void f();
void main()
{
	setlocale(LC_ALL, "Russian");
	cout << "x = " << x << endl;
	f();
	cout << "f = " << result << endl;
	cout << "??????? x: " << endl;
	cin >> x;
	f();
	cout << "f = " << result << endl;

}