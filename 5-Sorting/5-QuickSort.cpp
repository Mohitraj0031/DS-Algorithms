#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> &arr,int low, int high){
    int pivoit = arr[low];
    int i = low;
    int j = high;

    while( i<j ){
        while(arr[i]<= pivoit && i <= high-1){
            i++;
        }
        while(arr[j]> pivoit && j >= low +1){
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;

}

void quick_sort(vector <int> &arr, int low , int high){
    if(low < high){
        int pIndex = partition(arr,low, high);
        quick_sort(arr,low, pIndex-1);
        quick_sort(arr,pIndex+1,high);
    }

}

vector<int> qs(vector<int> arr){
    quick_sort(arr, 0, arr.size() - 1);
    return arr;
}

int main() {
    // int n;
    // cout << "Enter size of Array: ";
    // cin >> n;

    // vector<int> arr; // Declare an empty vector

    // cout << "Enter " << n << " elements: ";
    // for (int i = 0; i < n; i++) {
    //     int x;
    //     cin >> x;
    //     arr.push_back(x); // Add elements dynamically
    // }
    vector <int> arr = {4,2,1,55,18,7,14,1};
    int n = arr.size();
    cout<< "Before Using Quick Sort : " << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    arr = qs(arr);
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    cout << endl;
    return 0;
}