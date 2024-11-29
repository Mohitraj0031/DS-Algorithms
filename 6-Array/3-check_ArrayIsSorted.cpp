#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n){
    for(int i=1; i<n; i++){
            if(arr[i]<arr[i-1])
              return false;
        }
    

    return true;

}

int main(){
    int arr[] = {11,12,13,14,15};
    int n = sizeof(arr)/sizeof(arr[0]);
    // bool isSort = isSorted(arr,n);

    // if(isSort) cout<< "True" <<endl;
    // else cout << "False" <<endl;

    printf("%s", isSorted(arr, n) ? "True" : "False");

    return 0;

}