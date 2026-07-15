#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << a << " " << b;
}



//with using 3 variable 
int c;
c = a;
a = b;
b = c;
cout << a << " " << b;
