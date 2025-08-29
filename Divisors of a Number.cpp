//Input: n = 6  Output = [1, 2, 3, 6]  Explanation: The divisors of 6 are 1, 2, 3, 6. 

//option 1: all Divisor number store in vector
#include<iostream>
using namespace std;

class Solution {
public:
    vector<int> divisors(int n) {
        vector<int>ans;
        for(int  i=1; i<=n; i++){
            if(n % i == 0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
int main(){
  solution obj;
	vector<int> result = obj.divisors(8);
	for(int x: result){
	    cout << x <<" ";
	}
	cout<< endl;
    return 0;
}


//Option 2 : To print all divisor number 
#include <bits/stdc++.h>
using namespace std;

class solution{
    public:
    int divisorofnum(int n){
        for(int  i=1; i<=n; i++){
            if(n % i == 0){
                cout << i << " ";
            }
        }cout << endl;
    }
};

int main() {
	solution obj;
	obj.divisorofnum(8) ;
    return 0;
}
  
