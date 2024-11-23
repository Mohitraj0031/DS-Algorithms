#include<bits/stdc++.h>
using namespace std;

int sortArr(vector<int>& arr){
    sort(arr.begin(),arr.end());
    return arr[arr.size() -1 ];

}

int Max(vector<int>& arr){
    int max = arr[0];
    for(int i = 0; i<arr.size(); i++){
        if(max <= arr[i]){
            max = arr[i];
        }
    }
     
      return max ;
      
}

int main(){
    vector<int> arr1 = {2,15,6,1,0};
    vector<int> arr2 = {8,10,5,12,9};

    // cout << "Largest element in first array: "<< sortArr(arr1) << endl;
    // cout << "Largest element in second array: "<< sortArr(arr2) << endl;


    cout << "Largest element in first array: "<< Max(arr1) << endl;
    cout << "Largest element in second array: "<< Max(arr2) << endl;
    return 0 ;
}