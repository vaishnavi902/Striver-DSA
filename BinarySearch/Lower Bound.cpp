/*Example 1
Input : nums= [1,2,2,3], x = 2
Output:1
  
Index 1 is the smallest index such that arr[1] >= x.

Example 2
Input : nums= [3,5,8,15,19], x = 9
Output: 3

Explanation:
Index 3 is the smallest index such that arr[3] >= x.*/

class Solution{
public:
    int lowerBound(vector<int> &nums, int x){
        int n = nums.size();
        for(int i = 0 ; i <= n; i++){
            if(nums[i] >= x){
                return i;
            }
        }
    }
};
