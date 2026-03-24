/*EXAMPLE 1: 
Input: nums = [2,2,1]
Output: 1

Example 2:
Input: nums = [4,1,2,1,2]
Output: 4*/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int result = 0;

        for(int i = 0; i < n ; i++){
            result = result ^ nums[i];               //XOR METHOD ---> a ^ a = 0   a ^ 0 = a 
        }  
        return result;
    }
};
