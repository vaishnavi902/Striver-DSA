#include<iostream>
using namespace std;

void SelectionSort(int arr[], int n){
  for(int i=0 ; i < n-1; i++){
    int min = i;
    for(int j = i+1; j < n; j++){
        if(arr[j] < arr[min]) {
            min = j;
        }
    }

//swapping the array elements
    int temp = arr[min];
    arr[min] = arr[i];
    arr[i] = temp;
  }
};

int main(){
  int arr[] = {23, 67, 89, 21};
  int n = sizeof(arr) / sizeof(arr[0]);

  cout<<"before selection sort :"<<"\n";
    for(int i=0;i<n;i++){
      cout<<arr[i] << " "<<endl;
    }

  SelectionSort(arr, n);

  cout << "After selection sort :" << "\n";
    for(int i=0;i<n;i++){
       cout<<arr[i] << " "<<endl;
    }
return 0;
}
