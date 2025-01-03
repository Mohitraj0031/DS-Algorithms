#include<iostream>
using namespace std;

// This algorithm have time complexity of O(n^2)

void selection_sort(int arr[],int n){
    for(int i=0; i<n-1; i++ ) {
        int min = i;
        for(int j = i; j<n; j++ ){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++) cin >> arr[i];
    selection_sort(arr,n);
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0 ;
}