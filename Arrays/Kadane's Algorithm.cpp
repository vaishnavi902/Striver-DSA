/*Example 1

Input: nums = [2, 3, 5, -2, 7, -4]
Output: 15
Explanation:
The subarray from index 0 to index 4 has the largest sum = 15*/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentSum = nums[0];
        int maxSum = nums[0];
        for(int i =1; i< nums.size();i++){
            currentSum = max(nums[i] , currentSum + nums[i]);
            maxSum = max(maxSum , currentSum);
        }
    return maxSum;
    }
};
