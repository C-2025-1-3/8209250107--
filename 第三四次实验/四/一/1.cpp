#include<iostream>
using namespace std;
int main() {
	int arr[10];
	int result[10];
	int count = 0;
	cout << "Enter ten numbers :";
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < 10; i++) {
		int is_new = 1;
		for (int j = 0; j < count; j++) {
			if (arr[i] == result[j]) {
				is_new = 0;
				break;
			}
		}
		if (is_new == 1) {
			result[count] = arr[i];
			count++;
		}
	}
	cout << "The distinct numbers are:";
	for (int i = 0; i < count; i++) {
		cout << result[i];
	}
	cout << endl;
	return 0;

}