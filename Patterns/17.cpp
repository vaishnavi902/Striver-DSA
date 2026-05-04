#include <iostream>
using namespace std;

int main(){
int n =4;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
        //Increasing
        for(int j=0;j<i;j++){
            cout<<char('A'+j);
        }
        //decresing
        for(int j=i-2;j>=0;j--){
            cout<<char('A'+j);
        }
        cout<<endl;
    }
    return 0;
}
/*Output:
   A
  ABA
 ABCBA
ABCDCBA
*/
