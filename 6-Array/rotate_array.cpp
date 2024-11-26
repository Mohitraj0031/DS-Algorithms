#include<bits/stdc++.h>
using namespace std;

void Rotatetoright(int arr[],int n,int k){
    if(n==0) return;
    k = k % n;
    if(k>n) return;

    int temp[k];
    for(int i = n - k; i<n; i++){
        temp[i-n+k] = arr[i];
    }
    for(int i = n - k-1; i>=0; i--){
        arr[i+k] = arr[i];
    }
    for(int i = 0; i<k; i++){
        arr[i] = temp[i];
    }

}


int main(){
    int arr[] = {4,5,6,2,1,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 1;
    Rotatetoright(arr,n,k);
    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";
    }
    return 0;
}