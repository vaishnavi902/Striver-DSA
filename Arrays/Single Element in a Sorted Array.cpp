/*You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.
Return the single element that appears only once.
Your solution must run in O(log n) time and O(1) space.

Input: nums = [1,1,2,3,3,4,4,8,8]
Output: 2
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            // Make mid even
            if (mid % 2 == 1) {
                mid--;
            }

            if (nums[mid] == nums[mid + 1]) {
                low = mid + 2;
            } else {
                high = mid;
            }
        }

        return nums[low];
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1, 1, 2, 2, 3, 3, 4};
    int ans = obj.singleNonDuplicate(nums);
    cout << "Single element is: " << ans << endl;
    return 0;
}
