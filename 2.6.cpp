#include <iostream>
using namespace std;

int main() {
    int a, b, c, max, min;
    cout << "������������������" << endl;
    cin >> a >> b;
    if (a > b) {
        max = a;
        min = b;
    }
    else {
        max = b;
        min = a;
    }
    for (int i = 1; i <= min; i++) {
        if (a % i == 0 && b % i == 0) {
            c = i;
        }
    }
    cout << "���Լ��Ϊ��" << c << endl;
    for (int i = max;; i++) {
        if (i % a == 0 && i % b == 0) {
            cout << "��С������Ϊ��" << i << endl;
            break;
        }
    }
    return 0;
}