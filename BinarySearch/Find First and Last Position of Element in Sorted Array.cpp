/*Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
*/
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        return {findBound(nums, target, true), findBound(nums, target, false)};
    }

        private:
        int findBound(vector<int>& nums, int target, bool isFirst) {
        int low = 0, high = nums.size() - 1;
        int ans = -1;
        while(low <= high){
            int mid = low + (high - low) /2;
            
            if(nums[mid] == target){
                ans = mid; 
                if (isFirst) high = mid - 1; 
                else low = mid + 1;  
            }
            else if(nums[mid] < target){
                low = mid +1;
            }else{
                high = mid - 1;
            }
        }
        return ans;
        }
};
