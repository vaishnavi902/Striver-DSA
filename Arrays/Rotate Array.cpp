/*Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]*/

class Solution {                                                                     //Time Complexity = o(n)
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;      //if k>n

        reverse(nums.begin() , nums.end());
        reverse(nums.begin() , nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
    }
};

//Another Solution But Different Time Complexity -----> o(n*k) very slow 
/*for(int i = 0; i < k; i++) {
    int last = nums[n-1];
    for(int j = n-1; j > 0; j--) {
        nums[j] = nums[j-1];
    }
    nums[0] = last;
}*/
