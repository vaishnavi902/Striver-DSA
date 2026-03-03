/*Input:
 arr[] = {2, 5, 1, 3, 0}  
Output:
 5  
Explanation:
  
5 is the largest element in the array.*/
class Solution {
public:
    int largestElement(vector<int>& nums) {
        int ans = INT_MIN;   // ✅ declare once

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > ans){
                ans = nums[i];
            }
        }
        return ans;
    }
};
