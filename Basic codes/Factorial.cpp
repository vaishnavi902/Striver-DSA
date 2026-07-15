#include <iostream>
using namespace std;

class Factorial {
public:
    void fact(int n) {
        
        if (n <= 1) {
            cout << n << endl;
            return; 
        }

        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                cout << i << endl;
            }
        }
    }
};

int main() {
    Factorial F;
    F.fact(4); // Passing 4 will output its factors: 1, 2, and 4
    return 0;
}
