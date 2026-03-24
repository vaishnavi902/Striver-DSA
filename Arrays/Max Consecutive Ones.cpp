/*Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.*/
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int maxcount = 0;

        for(int i=0 ;i<n ;i++ ){
            if(nums[i] == 1){
                count ++;
                maxcount = max(maxcount , count);
            }else{
                count = 0;
            }
        }
        return maxcount;
    }
};
