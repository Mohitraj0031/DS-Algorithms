#include<iostream>
using namespace std;

void insertion_sort(int arr[], int n){
    for(int i = 0; i<n; i++){
        int j = i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}


int main(){
    int n;
    cout<<"Enter size of Array "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i] ;
    insertion_sort(arr,n);
    for(int i=0; i<n; i++) cout<< arr[i] <<" ";
    return 0;

}

// worst and average case time complexity is O(N^2)
// best case time complexity is O(n)