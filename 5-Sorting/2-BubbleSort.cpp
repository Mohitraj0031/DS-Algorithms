#include<iostream>
using namespace std;

// This algorithm have time complexity of O(n^2)
// but if we take best case where a sorted array is givin , then complexity will be O(n)

void bubble_sort(int arr[],int n){
    for(int i = n-1; i>=1; i--){
        int didSwap = 0 ;
        for(int j = 0; j<i; j++ ){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] =temp;
                didSwap = 1;
            }
        }

        if(didSwap == 0) {
            break;
        }

        cout << "runs" << endl;
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++) cin >> arr[i];
    bubble_sort(arr,n);
    for(int i = 0; i<n; i++){ 
        cout << arr[i] << " "; 
    }
    return 0 ;
}