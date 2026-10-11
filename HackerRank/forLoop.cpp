#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a;
    cin >> b;

    if (a <= b) {
        for (int num = 0; num < 10; num++) {
            if (a == num) {
                while (num < 10) {
                    if (num == 1) {
                        cout << "one\n";
                    } else if (num == 2) {
                        cout << "two\n";
                    } else if (num == 3) {
                        cout << "three\n";
                    } else if (num == 4) {
                        cout << "four\n";
                    } else if (num == 5) {
                        cout << "five\n";
                    } else if (num == 6) {
                        cout << "six\n";
                    } else if (num == 7) {
                        cout << "seven\n";
                    } else if (num == 8) {
                        cout << "eight\n";
                    } else if (num == 9) {
                        cout << "nine\n";
                    }
                    num++;
                }
            }
        }

        if (a % 2 == 0) {
            cout << "even\n";
        } else {
            cout << "odd\n";
        }
        
        if (b % 2 == 0) {
            cout << "even\n";
        } else {
            cout << "odd\n";
        }
    } else {
        cout << "the number of a is must less equal to b\n";
    }

    return 0;
}