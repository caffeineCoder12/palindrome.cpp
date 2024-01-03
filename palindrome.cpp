#include <iostream>

using namespace std;

int main() {
    int num, original, remainder;
    int reversedNum = 0;

    cout << "Enter an integer: ";
    cin >> num;

    original = num;

    while (num > 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    if (original == reversedNum) {
        cout << original << " is a palindrome." << endl;
    } else {
        cout << original << " is not a palindrome." << endl;
    }

    return 0;
}
