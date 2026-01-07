#include<iostream>
using namespace std;
int main() {
	int n;
	cout << "请输入数组元素个数：";
	cin >> n;
	int* arr = new int[n];
	cout << "请输入" << n << "个整数：";
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	cout << "排序结果：";
	for (int i = 0; i < n; i++) {
		cout << *(arr + i) << '\t';
	}
	cout << endl;
	delete[]arr;
	return 0;
}