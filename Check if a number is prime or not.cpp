//METHOD1 :-
//optimized square root approch ---> time complexity := O(√n)
#include <bits/stdc++.h>
using namespace std;

class solution {
    public: 
    bool primeornot(int n) {
        if (n <= 1) {
            return false;
        }
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    solution obj;
    cout << boolalpha << obj.primeornot(2);
    return 0;
}


//METHOD 2 :- 
//Brute force approch -----> Time complexity: O(n)
#include <iostream>
using namespace std;

class solution{
public: 
    bool primeornot(int n) {
        int cnt = 0;
        for(int i=1;i<=n;i++){
            if(n%1==0 && n%i==0){
                cnt = cnt +1;
            }
        }
        if(cnt == 2){
            return true; 
        }else{
            return false;
        }
    }
};

int main() {
    solution obj;
    cout << boolalpha << obj.primeornot(1)<<endl ;
    return 0;
}
