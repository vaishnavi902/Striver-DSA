/*Input : arr = [4,5,6,7,0,1,2,3]
Result: 4
Explanation: The original array should be [0,1,2,3,4,5,6,7]. So, we can notice that the array has been rotated 4 times.*/

#include<bits/stdc++.h>
using namespace std;

class solution {
public:
  int numberofarrayrotation(vector<int>& nums){
    int low = 0 , high = nums.size()-1;
    while(low < high){
      int mid = low + (high - low)/ 2;
      if(nums[mid] > nums[high]){
          low = mid + 1;
      }else{
          high = mid;
      }
    }
    return low;
  }
};

int main(){
    solution obj;
    vector<int> nums = {5,6,1,1,2,3};
    int rotations = obj.numberofarrayrotation(nums);
    cout << rotations << endl;
    return 0;
}
