/*Example 1:
Input: piles = [3,6,7,11], h = 8
Output: 4

Example 2:
Input: piles = [30,11,23,4,20], h = 5
Output: 30

Example 3:
Input: piles = [30,11,23,4,20], h = 6
Output: 23
*/
#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    int kokoBananas(vector<int> &piles, int h){
        int maxpile = *max_element(piles.begin() , piles.end());
        for(int k = 1 ; k <= maxpile; k++){
            long long hours =0;
            for(int i = 0 ;i< piles.size(); i++){
                hours += (piles[i] + k-1)/k;
            }
            if(hours <= h){
                return k;
            }
        }
        return -1;
    }
};

int main(){
    solution obj;
    vector <int> piles = {3,6,7,11};
    cout<<obj.kokoBananas(piles, 8)<<endl;
    return 0;
}
