//Input: n = 121  Output: true  Explanation: When read from left to right : 121.When read from right to left : 121.
#include<iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(int n) {
        
        int original = n;
        int revnum = 0;
        while(n!=0){
            int id = n % 10;
            revnum = (revnum * 10) + id;
            n = n / 10;
        }
        if(original == revnum){
            return true;
        }else{
            return false;
        }
    }
};

int main(){
    Solution Obj;
    cout << Obj.isPalindrome(121);
}
