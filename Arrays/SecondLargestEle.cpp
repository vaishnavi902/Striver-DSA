/*Input:
 [1, 2, 4, 7, 7, 5]  
Output:
Second Largest : 5  */
//Time complexity = o(n)   ------ Optimal Approch Solution
int secondLargestElement(vector<int>& nums) {
    int largest = INT_MIN, second = INT_MIN;

    for(int num : nums){
        if(num > largest){
            second = largest;
            largest = num;
        }
        else if(num > second && num != largest){
            second = num;
        }
    }

    return (second == INT_MIN) ? -1 : second;
}
}
