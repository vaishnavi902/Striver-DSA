/*Example 1

Input : nums =[3, 4, 4, 7, 8, 10], x= 5
Output: 4 7
Explanation: The floor of 5 in the array is 4, and the ceiling of 5 in the array is 7.*/

class Solution {
public:
    vector<int> getFloorAndCeil(vector<int> nums, int x) {
        int low = 0, high = nums.size() - 1;
        int floorval = -1;
        int ceilval = -1;

        while(low <= high){
            int mid = low + (high - low) /2;
            if(nums[mid] == x){
                return {nums[mid] , nums[mid]};
            }else if(nums[mid] < x){
                floorval = nums[mid];
                low = mid+1;
            }else{
                ceilval = nums[mid];
                high = mid - 1;
            }

        }
        return {floorval , ceilval};
    }
};
