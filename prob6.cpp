#include <iostream>
using namespace std;
int productOfDigits(int n) {
    if (n == 0) return 1;
    return (n % 10) * productOfDigits(n / 10);
}
int main() {
    int n;
    cin >> n;
    cout << productOfDigits(n);
    return 0;
}