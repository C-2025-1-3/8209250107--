#include<iostream>
using namespace std;
int main()
{
	double x, y;
	const double PI = 3.14;
	cin >> x>>y ;
	double volume = 1 / 3 * PI * x * x * y;
	cout << volume << endl;
	return 0;
}