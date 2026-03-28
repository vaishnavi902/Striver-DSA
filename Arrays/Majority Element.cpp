/*Example 1:
Input: nums = [3,2,3]
Output: 3*/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int candidate = 0;

        for(int i = 0 ; i < nums.size(); i++){
            if(count == 0 ){
                candidate = nums[i];
            }

            if(candidate == nums[i]){
                count++;
            }else{
                count--;
            }
        }
        return candidate;
    }
};
