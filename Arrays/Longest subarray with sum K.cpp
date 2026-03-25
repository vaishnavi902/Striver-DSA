/*Input: nums = [10, 5, 2, 7, 1, 9],  k=15
Output: 4
Explanation:
The longest sub-array with a sum equal to 15 is [5, 2, 7, 1], which has a length of 4. This sub-array starts at index 1 and ends at index 4, and the sum of its elements (5 + 2 + 7 + 1) equals 15. Therefore, the length of this sub-array is 4.*/
class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        int left = 0,  maxlength = 0,  sum =0;
        for(int right = 0; right <= nums.size(); right++){
            sum += nums[right];

            //shrink the window while K is greater
            while(sum > k && left <= right){
                sum = sum - nums[left];
                left++;
            }

            if(sum == k){
                maxlength = max(maxlength , right-left+1);
            }
        }
    return maxlength;
    }
};
