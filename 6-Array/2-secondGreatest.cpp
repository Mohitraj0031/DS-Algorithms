#include<bits/stdc++.h>
using namespace std;


int second_SmallElement(vector<int> &arr,int n){
if(n<2) return -1;
    int small = INT_MAX;
    int second_small = INT_MAX;

    int i;
    for (i=0; i<n; i++){
        if(arr[i] < small){
            second_small = small;
            small = arr[i];
        }
        else if(arr[i]<second_small && arr[i] != small){
            second_small = arr[i];
        }
    }
    return second_small;
}

int second_LargeElement(vector<int> &arr,int n){
if(n<2) return -1;
    int large = INT_MIN;
    int second_large = INT_MIN;
    int i;
    for(i=0; i<n; i++){
        if(arr[i] > large){
            second_large = large;
            large = arr[i];
        }
        else if(arr[i] > second_large && arr[i] != large){
            second_large = arr[i];
        }
    }
    return second_large;
}
int main(){
    vector<int> arr = {2,15,6,3,0,8};
    int n =sizeof(arr)/sizeof(arr[0]);
    int sS = second_SmallElement(arr,n);
    int sL = second_LargeElement(arr,n);

    cout << "Second smallest element in array: "<< sS << endl;
    cout << "Second largest element in array: "<< sL << endl;
    return 0 ;
}