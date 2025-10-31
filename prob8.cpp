//
// Created by Dinara on 31/10/2025.
//
#include <iostream>
using namespace std;
bool isIncreasing(int n) {
    if (n < 10)
        return true;
    int last = n % 10;
    int secondLast = (n / 10) % 10;
    if (last <= secondLast)
        return false;
    return isIncreasing(n / 10);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isIncreasing(n))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}