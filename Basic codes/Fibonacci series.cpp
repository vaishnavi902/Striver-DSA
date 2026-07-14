#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a = 0, b = 1;

    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        int c = a + b;
        a = b;
        b = c;
    }
}





------2nd method---------

#include <iostream>
using namespace std;

class Fibonacci {
public:
    void printSeries(int n) {
        int start = 0;
        int next = 1;
        int ans; // Declared the answer variable used in your notes

        if (start == 0 && next == 0) {
            return;
        }

        // Loops 'n' times to generate the sequence
        while (n > 0) {
            ans = start + next;
            start = next;
            next = ans;
            
            cout << start << endl;
            n--;
        }
    }
};

int main() {
    Fibonacci f;
    int terms = 5; // Change this number to print more or fewer terms
    
    cout << "Fibonacci Series:" << endl;
    f.printSeries(terms);
    
    return 0;
}
