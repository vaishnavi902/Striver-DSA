#include <iostream>
using namespace std;

int main() {
    int n =5;
    for (int i = n; i >= i; i--) {
        for (char ch = 'A'; ch < 'A' + i; ch++) {
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}
/*Output
ABCDE
ABCD
ABC
AB
A
*/
