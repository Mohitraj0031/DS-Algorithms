#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array"<<endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    //pre-computation
    int hash[13] = {0};
    for(int i=0; i<n; i++)
    {
        hash[arr[i]] += 1;
    }

    int q; 
    cin>>q;
    while(q--)
    {
        int number;
        cin >> number;
        cout << hash[number] <<endl; 
    } //fetch

    return 0;

}