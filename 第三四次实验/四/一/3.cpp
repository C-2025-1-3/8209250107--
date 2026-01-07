#include<iostream>
using namespace std;
int main() {
	const  int total = 100;
	bool lockers[total + 1] = { false };
	for (int i = 1; i < total + 1; i++) {
		lockers[i] = true;
	}
	for (int j = 2; j < total + 1; j++) {
		int step = j + 1;
		for (int locker = j; locker < total + 1; locker += step) {
			lockers[locker] = !lockers[locker];
		}
	}
	cout << 1;
	for (int i = 2; i < total + 1; i++) {
		if (lockers[i] == true) {
			cout << " " << i;
		}
	}
	return 0;
}