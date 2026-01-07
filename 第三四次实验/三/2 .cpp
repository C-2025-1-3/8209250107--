#include<iostream>
using namespace std;
bool is_prime(int num) {

	if (num < 2)return false;
	for (int i = 2; i < num; i++) {
		if (num % i == 0) return false;
	}
	return true;
}
int main() {
	int x = 2;
	int perline = 10;
	int total = 0;
	while (total < 200) {
		if (is_prime(x)) {
			cout << x << "\t";
			total++;

			if (total % perline == 0) {
				cout << endl;
			}
		}
		x++;
	}
	return 0;
}