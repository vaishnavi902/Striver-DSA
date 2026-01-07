//Given an array of size N. Find the highest and lowest frequency element.
#include<iostream>
#include<vector>
using namespace std;

class FrequencyCounter{
    public:
    void countFreq(int arr[] , int n){
        vector<bool> visited(n, false);
        int maxFreq = 0 ,  minFreq = n;
        int maxEle = 0 , minEle = 0;
        
        for(int i=0 ; i<n ;i++){
            if(visited[i] == true){
                continue;
            }
            //count the frequency of the arr[i]
            int count = 1;
            for(int j=i+1 ; j<n ;j++){
                if(arr[i] == arr[j]){
                    visited[j] = true;
                    count ++;
                }
            }
            
            if (count > maxFreq){
                maxEle = arr[i];
                maxFreq = count;
            }
            
            if (count <  minFreq){
                minEle = arr[i];
                minFreq = count;
            }
        }
        cout<< "The highest frequency Element is: "<<maxEle<<endl;
        cout<<"The lowest Frequency Element is: "<<minEle<<endl;
    }
};
int main(){
    FrequencyCounter fc;
    int arr[] ={10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    fc.countFreq(arr, n);
    return 0;
}

//ANS ---> maxEle = 10 , minEle = 15
