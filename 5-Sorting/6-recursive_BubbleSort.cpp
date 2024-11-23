#include<iostream>
using namespace std;

void bubble_sort(int arr[], int n){
    if (n == 1) return;

    int didswap = 0; 

    for(int j=0; j<n-1; j++){
        if(arr[j]>arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            didswap = 1;
        }
    }

    if(didswap == 0) return;

    bubble_sort(arr, n-1);
        

}

int main(){
    
    int arr[] = {2,15,33,5,12,9};
    int n = sizeof(arr)/sizeof(arr[0]) ;
    cout << "Before Using Bubble Sort "<<endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    bubble_sort(arr,n);
    
    cout << "After Using Bubble Sort "<< endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}