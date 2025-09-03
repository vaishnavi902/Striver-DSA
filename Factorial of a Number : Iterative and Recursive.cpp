// 3! = 3*2*1 = 6
//*****ITERATIVE METHOD*****// 
#include <iostream>
using namespace std;

int factorial(int X) {
    int ans = 1;
      for (int i = 1; i <= X; i++) {
        ans = ans * i;
      }
return ans;
}
int main() {
    cout << "The factorial of " << factorial(5) ;
    return 0;
}

//****RECURSIVE METHOD****//
#include <bits/stdc++.h>
using namespace std;
int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}
int main() {
    int n = 3;
    cout << factorial(n) << endl;
    return 0;
}
