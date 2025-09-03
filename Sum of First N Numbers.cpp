//sum of 1 to n numbers  ex :5 --> 15
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
  void printsum(int n){
  int sum = 0;
  for(int i = 1; i <= n ;i++){
      sum = sum + i;
  }
  cout << sum <<endl;
  }
};

int main(){
Solution obj;
obj.printsum(6);
return 0;
}
