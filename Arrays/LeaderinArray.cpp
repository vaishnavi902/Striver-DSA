/*Example 1:
Input:
 arr = [4, 7, 1, 0]  
Output:
 7 1 0  
Explanation:
 The rightmost element (0) is always a leader.  
7 and 1 are greater than the elements to their right, making them leaders as well.
*/
class Solution {
public:
    vector<int> Leaders(vector<int>& arr) {
        int n = arr.size();
        vector<int> result;
        
        int leader = arr[n - 1];
        result.push_back(leader);
        
        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] > leader) {
                leader = arr[i];
                result.push_back(leader);
            }
        }
        
        reverse(result.begin(), result.end());
        return result;
    }
};
