#include<iostream>
using namespace std;
int indexOf(const char s1[], const char s2[]) {
	int i = 0, j = 0;
	int start = 0;
	while (s2[i] != '\0') {
		j = 0;
		start = i;
		while (s1[j] != '\0' && s2[i] != '\0' && s1[j] == s2[i]) {
			j++;
			i++;
		}
		if (s1[j] == '\0') {
			return start;
		}
		i = start + 1;
	}
	return -1;
}
int main() {
	const int max_size = 100;
	char s1[max_size], s2[max_size];
	cout << "Enter the first string:";
	cin.getline(s1, max_size);
	cout << "Enter the second string: ";
	cin.getline(s2, max_size);
	int result = indexOf(s1, s2);
	cout << "indexOf(\"" << s1 << "\",\"" << s2 << "\")is" << result << endl;
	return 0;
}