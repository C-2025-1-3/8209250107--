#include<iostream>
using namespace std;
int main() {
	int n;
	int peach[11];
	peach[10] = 1;
	for (n = 10; n >= 1; n--) {
		int i = n, j = n - 1;
		peach[j] = (peach[i] + 1) * 2;
	}
	cout << peach[1] << endl;
	return 0;
}