//Example:    Input: N = 5    Output: 0 1 1 2 3 5    Explanation: 0 1 1 2 3 5 is the fibonacci series up to 5th term
#include <bits/stdc++.h>
using namespace std;

class solution {
public: 
    void fibonacci(int n) {
        int previous = 0, current = 1;
        cout << previous << " ";
        if (n >= 1) {
            cout << current << " ";
        }
        
        for (int i = 2; i <= n; i++) {
            int next = previous + current;
            cout << next << " ";
            previous = current;
            current = next;
        }
    }
};

int main() {
    solution obj;
    obj.fibonacci(5);
}
