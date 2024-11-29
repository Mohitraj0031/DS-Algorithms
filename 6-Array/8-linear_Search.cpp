#include<bits/stdc++.h>
using namespace std;

int linear_Search(int arr[],int n,int num){
    for(int i=0; i<n; i++){
        if(arr[i] == num){
            return i;
            // cout<< num <<" is present at index "<< i <<endl;
        }     
    }

    return -1;
}


int main(){
    int arr []= {2,5,11,15,3,8};
    int n = sizeof(arr);
    int num;
    cin>>num;
    int val = linear_Search(arr,n,num);
    printf("%d",val);
    return 0;

}