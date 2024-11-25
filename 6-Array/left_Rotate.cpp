#include<bits/stdc++.h>
using namespace std;

void solve(int arr[],int n){
    int temp = arr[0];
    for(int i = 0; i<n-1; i++ ){
        arr[i] = arr[i+1]; 
    }
    arr[n-1] = temp;

    for (int i = 0; i<n; i++){
        cout<< arr[i] << " ";
    }
}


int main (){
    int arr[] = {4,5,6,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    solve(arr,n);
    return 0;
}