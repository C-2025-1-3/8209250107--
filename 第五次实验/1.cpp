#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:              // 数据成员为公用的
	int hour;
	int minute;
	int sec;
public:
	void inputtime() {
		cout << "请输入小时：";
		cin >> hour;
		cout << "请输入分钟：";
		cin >> minute;
		cout << "请输入秒：";
		cin >> sec;
	}
	void outputtime() {
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time t1;           //定义t1为Time类对象
	t1.inputtime();
	t1.outputtime();
	return 0;
}