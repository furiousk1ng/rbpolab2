#include <iostream>
using namespace std;

void f();
double x = 5;
double result;
void main()
{
	setlocale(LC_ALL, "Russian");
	cout << "x = " << x << endl;
	f();
	cout <<"Result = "<< result<<endl;
	cout << "¬ведите x: ";
	cin >> x;
	f();
	cout << "Result = " << result<<endl;

}
void f()
{
	result = (1 / (sqrt(x) + sqrt(2)));
}