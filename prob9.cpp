//
// Created by Dinara on 31/10/2025.
//
#include <iostream>
using namespace std;
int countZeros(int n) {
    if (n == 0)
        return 1;
    if (n < 10)
        return 0;
    int lastDigit = n % 10;
    if (lastDigit == 0)
        return 1 + countZeros(n / 10);
    else
        return countZeros(n / 10);
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Number of zeros: " << countZeros(n) << endl;
    return 0;
}