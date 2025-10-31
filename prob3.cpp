//
// Created by Dinara on 31/10/2025.
//
#include <iostream>
using namespace std;
bool isPalindrome(int n, int original, int& reversed) {
    if (n == 0)
        return original == reversed;
    reversed = reversed * 10 + n % 10;
    return isPalindrome(n / 10, original, reversed);
}
bool isPalindrome(int n) {
    int reversed = 0;
    return isPalindrome(n, n, reversed);
}
int main() {
    cout << boolalpha;
    cout << isPalindrome(121) << endl;
    cout << isPalindrome(123) << endl;
    return 0;
}
