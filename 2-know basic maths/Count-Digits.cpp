#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

// Problem Statement: Given an integer N, return the number of digits in N.

// This is  an Optimized form with log of N time complexity

int func1(int n){
    
    int cnt = (int)(log10(n)+1);

    
    return cnt ;
}

int main(){
    int n;
    cout<<"Enter the digit: ";
    cin>>n;
    cout<<func1(n);
    return 0;
}



// This is a brute force approch which time complexity big O of N ;
// int count=0;
// void func1(int n){
//     while(n>0)
//     {
//     n = n/10;
//     count++;
//     }
//     cout<<count;

// }

 