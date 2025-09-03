//input :- 5  output :- 5 4 3 2 1
#include<iostream>
using namespace std;

class Solution {
  public:
    void printNumbers(int n) {
        if( n == 0){
          return ;
        }
        cout << n <<endl;
        printNumbers(n-1);
    }
};
int main(){
Solution obj;
obj.printNumbers(5);
return 0;
}
