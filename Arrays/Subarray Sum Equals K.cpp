/*Example 1:

Input: nums = [1,1,1], k = 2
Output: 2
Example 2:

Input: nums = [1,2,3], k = 3
Output: 2
*/

//1. Brute Force Approch
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0 ;
        for(int i = 0 ; i < nums.size(); i++){
            int sum = 0;
            for(int j = i; j < nums.size(); j++){
                sum +=nums[j];
                if(sum == k){
                    count++;
                }
            }
        }
       return count;
    }
};

//2. Optimal Solution
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0] = 1;

        int prefixSum = 0;
        int count = 0;

        for(int i = 0; i< nums.size(); i++){
            prefixSum += nums[i];

            if(mp.find(prefixSum-k) != mp.end()){
                count+= mp[prefixSum-k];
            }
            mp[prefixSum]++;
        }
        return count;
    }
};
