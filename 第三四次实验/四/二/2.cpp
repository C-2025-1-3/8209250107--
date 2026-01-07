#include<iostream>
using namespace std;
int parseHex(const char* const hexString) {
	int decimal = 0;
	for (int i = 0; hexString[i] != '\0'; i++) {
		char ch = hexString[i];
		int digit = 0;
		if (ch >= '0' && ch <= '9') {
			digit = ch - '0';
		}
		else if (ch >= 'a' && ch <= 'f') {
			digit = ch - 'a' + 10;
		}
		else if (ch >= 'A' && ch <= 'F') {
			digit = ch - 'A' + 10;
		}
		decimal = decimal * 16 + digit;
	}
	return decimal;
}
int main() {
	const int max_size = 20;
	char hexString[20];
	cout << "请输入一个十六进制的数字：";
	cin.getline(hexString, 20);
	int result = parseHex(hexString);
	cout << "转换为十进制数字为：" << result << endl;
	return 0;
}