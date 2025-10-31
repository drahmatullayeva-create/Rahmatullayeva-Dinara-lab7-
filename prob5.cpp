//
// Created by Dinara on 31/10/2025.
//
#include <iostream>
using namespace std;
int countEvenDigits(int n) {
    if (n == 0)
        return 0;
    int lastDigit = n % 10;
    int count = (lastDigit % 2 == 0);
    return count + countEvenDigits(n / 10);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Number of even digits: " << countEvenDigits(n) << endl;

    return 0;
}