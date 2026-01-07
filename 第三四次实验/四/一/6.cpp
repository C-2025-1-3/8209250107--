#include<iostream>
using namespace std;
void count(const char s[], int counts[]) {
	int i = 0;
	while (s[i] != '\0') {
		char ch = s[i];
		if (ch >= 'A' && ch <= 'Z') {
			int index = ch - 'A';
			counts[index]++;
		}
		else if (ch >= 'a' && ch <= 'z') {
			int index = ch - 'a';
			counts[index]++;
		}
		i++;
	}
}
int main() {
	const int max_size = 1000;
	char str[max_size];
	int counts[26] = { 0 };
	cout << "Enter a string:";
	cin.getline(str, max_size);
	count(str, counts);
	for (int i = 0; i < 26; i++) {
		if (counts[i] > 0) {
			char letter = 'a' + i;
			cout << letter << ":" << counts[i] << endl;
		}
	}
	return 0;
}