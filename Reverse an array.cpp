//Input: n=5, arr = [1,2,3,4,5]  Output: [5,4,3,2,1]  Explanation: The reverse of the array [1,2,3,4,5] is [5,4,3,2,1]
#include<iostream>
using namespace std;

class solution{
    public:
    void reverse (int arr[] , int n){
        for(int i = n-1 ;i >= 0; i--){
            cout << arr[i] << " ";
        }
        cout<<endl;
    }
};

int main(){
    solution obj;
    int arr[] =  {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    obj.reverse (arr ,n);
    return 0;
}
