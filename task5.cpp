#include <iostream>
#include <cmath>
using namespace std;

void f();
double x = 5;
double result;
int main()
{

	cout << "x = " << x << endl;
	f();
	cout <<"Result = "<< result<<endl;
	cout << "Vvod x: ";
	cin >> x;
	f();
	cout << "Result = " << result<<endl;

}
void f()
{
	result = (1 / (sqrt(x) + sqrt(2)));
}