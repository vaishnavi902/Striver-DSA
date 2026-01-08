//To Finding The Minimum Number Present In The Array
#include<iostream>
using namespace std;

int FindMin(int arr[], int n){
  int min = 0 ;
  for(int i = 1; i < n; i++){
      if(arr[i] < arr[min]){
          min = i;
      }
  }
return arr[min];
}
int main(){
  int arr[] = {2,5,1,8};
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << FindMin(arr , n);
  return 0;
}

//ANS-----> 1
  
