#include <iostream>
using namespace std;

int main() {
    int english = 0, number = 0, blank = 0, other = 0;
    char c;
    while ((c = getchar()) != '\n') {
        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
            english++;
        }
        else if (c >= '0' && c <= '9') {
            number++;
        }
        else if (c == ' ') {
            blank++;
        }
        else {
            other++;
        }
    }
    printf("%d %d %d %d", english, number, blank, other);
    return 0;
}