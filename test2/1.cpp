#include<iostream>
using namespace std;

int main()
{
    char n;
    cout << "请输入一个字母: ";
    cin >> n;
    if (n >= 'a' && n <= 'z') { n = n - 32; }
    cout << "转换结果: " << n << endl;
    return 0;
}