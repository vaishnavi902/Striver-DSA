#include<bits/stdc++.h>
using namespace std;
class Solution {
private:
    void solve(vector<int>& nums ,int n){
        if(n <= 1){
            return;
        }

        for(int i = 0;i < n-1; i++){
            if(nums[i] > nums[i+1]){
                swap(nums[i] , nums[i+1]);
            }
        }

        solve(nums, n-1);
    }
public:
    vector<int> bubbleSort(vector<int>& nums) {
       solve(nums, nums.size());
        return nums;       
    }
};
int main(){
    Solution sol;
    vector<int> nums = {1,7,3,9,7};
    vector<int> result = sol.bubbleSort(nums);
    for(int i = 0; i <result.size() ;i++){
        cout << result[i] << (i == result.size() - 1 ? "" : " ");
    }
    return 0;
}
