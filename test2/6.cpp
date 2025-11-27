#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	if (a <= 0 || b <= 0) { cout << "请输入正整数" << endl; }
	else {
		int min = (a < b) ? a : b;
		int gcd
			for (int i = min; i >= 1; i--) {
				if (a % i == 0 && b % i == 0) {
					gcd = i;
					break;
				}
				int lcm = (a * b) / gcd;
				cout << "最大公约数：" << gcd << endl;
				cout << "最小公倍数：" << lcm << endl;
			}
		return 0;
	}


}