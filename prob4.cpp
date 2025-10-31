//
// Created by Dinara on 31/10/2025.
//
#include <iostream>
#include <cmath>
using namespace std;
bool isPrimeRecursive(int n, int i = 2) {
    if (n <= 1)
        return false;
    if (i > sqrt(n))
        return true;
    if (n % i == 0)
        return false;
    return isPrimeRecursive(n, i + 1);
}
int main() {
    cout << boolalpha;
    cout << isPrimeRecursive(17) << endl;
    cout << isPrimeRecursive(20) << endl;
    return 0;
}