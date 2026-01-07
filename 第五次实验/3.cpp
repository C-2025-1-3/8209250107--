#include<iostream>
using namespace std;
class Cuboid {
private:
	double length;
	double width;
	double height;
	double volumn;
public:
	void inputDimensions() {
		cout << "请输入长方柱的长：";
		cin >> length;
		cout << "请输入长方柱的宽：";
		cin >> width;
		cout << "请输入长方柱的高：";
		cin >> height;
	}
	void calculatevolumn() {
		volumn = length * width * height;
	}
	void displayVolumn() {
		cout << "长方柱的体积为：" << volumn << endl;
	}
};
int main() {
	Cuboid cuboid1, cuboid2, cuboid3;
	cout << "第一个长方柱" << endl;
	cuboid1.inputDimensions();
	cuboid1.calculatevolumn();
	cuboid1.displayVolumn();
	cout << "第二个长方柱" << endl;
	cuboid2.inputDimensions();
	cuboid2.calculatevolumn();
	cuboid2.displayVolumn();
	cout << "第三个长方柱" << endl;
	cuboid3.inputDimensions();
	cuboid3.calculatevolumn();
	cuboid3.displayVolumn();
	return 0;
}