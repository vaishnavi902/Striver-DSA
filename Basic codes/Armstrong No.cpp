#include <iostream>
using namespace std;

int main() {
    int n, temp, ans = 0;
    cin >> n;

    temp = n;

    while (temp != 0) {
        int last = temp % 10;
        temp = temp / 10;
        ans += last * last * last;
    }

    if (ans == n)
        cout << "Armstrong number" << endl;
    else
        cout << "Not an Armstrong number" << endl;

    return 0;
}
