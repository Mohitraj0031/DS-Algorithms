#include<iostream>
#include<map>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n] ;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    // pre-compute
    map<int , int> mpp;
    for(int i =0; i<n; i++){
        mpp[arr[i]]++;
    }

    int maxFreq = 0, minFreq = n;
    int maxEle = 0, minEle = 0;

    for( auto it:mpp){
        int count = it.second;
        int element = it.first;


        if( count >maxFreq){
            maxEle = element;
            maxFreq = count;
            }
        
        if( count < minFreq){
            minEle = element;
            minFreq = count;
        }
    }

    cout << "This is max Frequency element: " << maxEle  << endl;
    cout << "This is min Frequency element: " << minEle  << endl;

    return 0 ;
}