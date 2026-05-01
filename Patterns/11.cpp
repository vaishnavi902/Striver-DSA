#include <iostream>
using namespace std;

int main() {
    int n =5;
    for(int i = 1;i<= n ;i++){
        int num = 1;
        for(int j = 1; j<=i; j++){
            cout << num <<" ";
            num = 1-num;
        }
        cout<<endl;
    }
    return 0;
}
/*Output

/*
1 
1 0 
1 0 1 
1 0 1 0 
1 0 1 0 1 

*/
