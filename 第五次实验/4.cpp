#include<iostream>
using namespace std;
class Student {
public:
	int num;
	float score;
public:
	static void max(Student* stu, int n) {
		int high = 0;
		for (int i = 1; i < n; i++) {
			if (stu[i].score > stu[high].score) {
				high = i;
			}
		}
		cout << "成绩最高者学号：" << stu[high].num << "\t" << "成绩最高者成绩：" << stu[high].score << endl;
	}
};
int main() {
	Student stu[5];
	stu[0] = { 01,91.0 };
	stu[1] = { 02,91.1 };
	stu[2] = { 03,91.2 };
	stu[3] = { 04,91.3 };
	stu[4] = { 05,91.4 };
	Student::max(stu, 5);
	return 0;
}