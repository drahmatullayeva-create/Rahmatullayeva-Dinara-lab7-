//
// Created by Dinara on 31/10/2025.
//
#include <iostream>
using namespace std;
int reverseNumber(int n, int rev = 0) {
    if (n == 0)
        return rev;
    return reverseNumber(n / 10, rev * 10 + n % 10);
}
int main() {
    cout << reverseNumber(1234) << endl;
    cout << reverseNumber(987) << endl;
    return 0;
}