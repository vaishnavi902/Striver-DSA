//Given an array of N integers, write a program to implement the Bubble Sorting algorithm.
#include<iostream>
using namespace std;

void BubbleSort(int arr[] , int n){
    for(int i = n-1 ; i >  0 ; i--){
        for(int j = 0 ; j < i ; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
        }
    }
    cout << "After Applying Bubble Sort The Array Is: "<<"\n";
    for(int i=0;i<n;i++){
        cout<< arr[i]<<endl;
    }
};

int main(){
    int arr[] = {13,46,24,52,20,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original Array : "<<"\n";
    for(int i=0 ; i< n ; i++){
        cout<< arr[i]<< endl;
    }
    BubbleSort(arr , n);
    
    return 0;
}
