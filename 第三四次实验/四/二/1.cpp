#include<iostream>
using namespace std;
int indexof(const char* s1, const char* s2) {
    int i = 0;
    while (s2[i] != '\0') {
        int j = 0;
        int start = i;
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
    char s1[100], s2[100];
    cout << "Ö÷×Ö·û´®£º";
    cin.getline(s2, 100);
    cout << "×Ö·û´®£º";
    cin.getline(s1, 100);
    cout << indexof(s1, s2) << endl;
    return 0;
}