/*Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int j =0 ;
       int n = nums.size();
       for(int i = 0;i <= n-1; i++){
        if(nums[i] != 0){
            swap(nums[i] , nums[j]);
            j++;
        }
       }
    }
};
