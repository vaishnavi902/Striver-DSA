/*Input: nums = [0, 2, 3, 1, 4]
Output: 5
Explanation:
nums contains 0, 1, 2, 3, 4 thus leaving 5 as the only missing number in the range [0, 5]*/
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        int total = n*(n+1)/2;
        int sum = 0;
        for(int i =0; i < n ;i++){
            sum += nums[i];
        }
        int missing_no = total - sum;
        return missing_no;   
    }
};
