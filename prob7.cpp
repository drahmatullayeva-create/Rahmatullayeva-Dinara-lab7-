//
// Created by Dinara on 31/10/2025.
//
#include <iostream>
using namespace std;
bool isPowerOfTwo(int n) {
    if (n == 1)
        return true;
    if (n == 0 || n % 2 != 0)
        return false;
    return isPowerOfTwo(n / 2);
}
int main() {
    int n;
    cin >> n;
    cout << (isPowerOfTwo(n) ? "true" : "false");
    return 0;
}