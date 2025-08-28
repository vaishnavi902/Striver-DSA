// Input:N = 153  Output:True  Explanation: 13+53+33 = 1 + 125 + 27 = 153  
//armstrong no's:- 12,153,370,371,1634,9474
#include <bits/stdc++.h>
using namespace std;
class solution{
    public:
    bool isarmstrong(int n){
        int original = n;
        int sum= 0;
        //To calculate the number of digts
        int k = to_string(n).length();
        
        //armstrong problem logic
        while(n!=0){ 
            int id = n%10; 
            sum = sum + pow(id,k); 
            n = n/10;
        } 
        if(sum == original){ 
            return true; 
        }else{ 
            return false; 
        } 
    }
};

int main() {
   solution obj;
   cout << boolalpha << obj.isarmstrong(12);
   return 0;
}
