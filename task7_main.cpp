#include <iostream>
#include <cmath>
using namespace std;
extern double x, result;
void f();
int main()
{
	x = 5;
	cout << "x = " << x << endl;
	f();
	cout << "f = " << result << endl;
	cout << "Vvod x: " << endl;
	cin >> x;
	f();
	cout << "f = " << result << endl;

}