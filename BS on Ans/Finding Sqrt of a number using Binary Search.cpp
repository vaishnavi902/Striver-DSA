/*You are given a positive integer n. Your task is to find and return its square root. 
If ‘n’ is not a perfect square, then return the floor value of sqrt(n).
1:- Input: N = 36    Output: 6
Explanation: Square root of 36 is 6. 
2 :- Input: N = 28    Output: 5
Explanation: Square root of 28 is approximately 5.292. So, the floor value will be 5. */

#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    int mysqrt(int X){
        if(X < 2){
            return X;
        }
        int left = 1, right = X/2, ans = 0;
        while(left <= right){
            long long mid = left + (right - left);
                if (mid*mid<= X){
                    ans = mid;
                    left = mid + 1;
                }else{
                    right = mid - 1;
                }
        }
    return ans;
    }
};

int main(){
    solution s;
    cout << s.mysqrt(28) <<endl;
    return 0;
}
