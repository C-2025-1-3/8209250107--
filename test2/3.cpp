#include<iostream>
using namespace std;
int main()
{
	double x, y, z;
	cout << "请输入三角形的三条边" << endl;
	cin >> x >> y >> z;
	if (x + y > z && x + z > y && y + z > x) {
		const double C = x + y + z;
		cout << "周长是：" << C << endl;
		if (x == y && y == z) { cout << "是等边三角形" << endl; }
		else if (x == y || x == z || y == z) { cout << "是等腰三角形" << endl; }
		else { cout << "是不等边三角形" << endl; }
	}
	else { cout << "不构成三角形" << endl; }
	return 0;
}