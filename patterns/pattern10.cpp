#include<iostream>
using namespace std;

int n = 5;
int main(){
    for(int i=0; i<=n; i++){
        for(int j=0; j<i; j++){
            cout<<" * ";
        }
        cout<<"\n";
    }

     for(int i=0; i<n; i++){
        for(int j=1; j<n-i; j++){
            cout<<" * ";
        }
        cout<<"\n";
    }


}

// output
//  * 
//  *  * 
//  *  *  * 
//  *  *  *  * 
//  *  *  *  *  * 
//  *  *  *  * 
//  *  *  * 
//  *  * 
//  * 