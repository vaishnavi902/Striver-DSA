//Given an array of integers called nums, sort the array in non-decreasing order using the insertion sort algorithm and return the sorted array.

#include<iostream>
using namespace std;

void InsertionSort(int arr[], int n){
    for(int i=1; i<n ; i++){
        int temp = arr[i];
        int j = i-1;
    
        while( j>=0 && arr[j]> temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
};

int main(){
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
     cout << "Original Array:\n";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    InsertionSort(arr, n);

    cout << "\nAfter Applying Insertion Sort:\n";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
return 0;    
}
