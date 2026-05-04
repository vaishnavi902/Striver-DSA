#include <iostream>
using namespace std;

int main(){
int n =5;
    for(int i=1;i<=n;i++){
        //decresing
        for(int j=i-1;j>=0;j--){
            cout<<char('E'-j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
/*Output
E 
D E 
C D E 
B C D E 
A B C D E 
*/
