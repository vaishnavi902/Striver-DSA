//Input: n1 = 4, n2 = 6  Output: 2  Explanation: Divisors of n1 = 1, 2, 4, Divisors of n2 = 1, 2, 3, Greatest Common divisor = 2.
#include<iostream>
using namespace std;
class Solution {
public:
    int gcdofnum(int n1,int n2) {
        
    int gcd = 1;
    for(int i=1;i<= min(n1,n2);i++){
        if(n1 % i==0 && n2 % i== 0){
            gcd = i;
        }
    }
    return gcd;
    }
};

int main(){
    Solution Obj;
    cout << Obj.gcdofnum(4,6) << endl;
}
