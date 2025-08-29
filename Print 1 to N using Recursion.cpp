//Input: n = 5  Output : 1  2  3  4  5    --> Using Recursion means no use of for,while and do while loop
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void printNumbers(int n) {
        if(n == 0){
          return ;
        }
        printNumbers(n -1);
        cout << n << endl;   
      }
};

int main() {
	Solution obj;
	obj.printNumbers(1);
}
