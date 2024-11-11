#include<iostream>
using namespace std;


// An Amrstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.
int n =  153;
int dup = n;
int main(){
    int aNum = 0;

    while(n>0){
        int digit = n % 10;
        aNum =  aNum + (digit*digit*digit);
        n = n/10;
    }
    if(aNum == dup){
        cout<<" Armstrong Number ";
    }else{
        cout<<" Not an Armstrong Number ";
    }
    return 0 ; 
}