/*Example :-
S = [1,2,3,4,5]
Output = [2,3,4,5,1]
*/

class solution{
public: 
    void rotate(vector<int>& nums) {
    int n = nums.size();
    int first = nums[0];
        for(int i = 0; i < n-1; i++) {
        nums[i] = nums[i+1];
    }
    nums[n-1] = first;
}
};
