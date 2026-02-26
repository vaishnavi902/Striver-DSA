#include<iostream>
using namespace std;

void insertion_sort(int arr[], int n ,int i){
    for(int i=0;i<n;i++){
   
        int j = i;
        while(j>0 && arr[j-1] > arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
};
int main(){
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout<<"Before Using Insertion Sort: "<<endl;
    for(int i=0;i<n;i++){
        cout<< arr[i] << " ";
    }
    cout<<endl;
    
    insertion_sort(arr , n, 0);
    cout<<"After Using Insertion Sort: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
