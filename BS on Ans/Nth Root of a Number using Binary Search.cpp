/*Given two numbers N and M, find the Nth root of M. The nth root of a number M is defined as a number X when raised to the power N equals M. If the 'nth root is not an integer, return -1.

Examples  [ X^N = M ]
Input: N = 3, M = 27   Output: 3
Explanation: The cube root of 27 is equal to 3.
Input : N = 4, M = 69   Output: -1
Explanation : The 4th root of 69 does not exist. So, the answer is -1.*/
  
#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    long long power(long long mid , int n){
        long long ans = 1;
        for(int i = 0; i< n; i++){
            ans*=mid;
        }
        return ans;
    }
    int Nthroot(int N , int M){
        int low = 1;
        int high = M;
        while(low <= high){
            int mid = low + (high - low)/2;
            long long val = power(mid , N);
            if(val == M){
                return mid;
            }else if(val < M){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        return -1;
    }
};

int main(){
    solution obj;
    cout << obj.Nthroot(4 , 81)<<endl;
    return 0;
}
