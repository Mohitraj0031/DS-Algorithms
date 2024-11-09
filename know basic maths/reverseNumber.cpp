#include<iostream>
using namespace std;

void reverseNumber(int n){
   while(n>0)
   {
   int digit = n % 10 ; 
   n = n/10;
   cout<<digit;
   }  
}

int main(){
    int n;
    cout<<" Enter the number: ";
    cin>>n;
    reverseNumber(n);
    return 0;

}