#include <iostream>
using namespace std;

int main() {
    int a, b, c, max, min;
    cout << "请输入两个正整数：" << endl;
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
    cout << "最大公约数为：" << c << endl;
    for (int i = max;; i++) {
        if (i % a == 0 && i % b == 0) {
            cout << "最小公倍数为：" << i << endl;
            break;
        }
    }
    return 0;
}