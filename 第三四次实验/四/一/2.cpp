#include<iostream>
using namespace std;
void bubbleSort(double list[], int listSize) {
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < listSize - 1; j++)
			if (list[j] > list[j + 1])
			{
				double temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
				changed = true;
			}
	} while (changed);
}
int main() {
	const int size = 10;
	double numbers[size];
	cout << "ÇëÊäÈë10¸öÊý£º";
	for (int i = 0; i < size; i++) {
		cin >> numbers[i];
	}
	bubbleSort(numbers, size);
	for (int i = 0; i < size; i++) {
		cout << numbers[i];
	}
	cout << endl;
	return 0;
}