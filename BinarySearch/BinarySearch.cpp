/*Example 1:
Input: nums = [-1,0,3,5,9,12], target = 9
Output: 4
Explanation: 9 exists in nums, and its index is 4

Example 2:
Input: nums = [-1,0,3,5,9,12], target = 2
Output: -1
Explanation: 2 does not exist in nums, so return -1*/
  
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start =0 , end = nums.size()-1;
        while(start<=end){
            int mid = (start+end )/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] < target){
                start = mid+1;
            }
            else {
                end = mid-1;
            }
        } 
        return -1;  
    }
};
