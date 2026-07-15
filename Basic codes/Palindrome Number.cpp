#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int rev = 0;

    while (n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    if (rev == n)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
}
