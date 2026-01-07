#include <iostream>
using namespace std;
#include"student.h" //不要漏写此行，否则编译通不过
void Student::set_value(int n, const char* nm, char s) {
    num = n;
    int i = 0;
    while (nm[i] != '\0' && i < 19) {
        name[i] = nm[i];
        i++;
    }
    name[i] = '\0';
    sex = s;
}
void Student::display()         //在类外定义display类函数
{
    cout << "num:" << num << endl;
    cout << "name:" << name << endl;
    cout << "sex:" << sex << endl;
}