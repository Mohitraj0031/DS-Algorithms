#include<iostream>
using namespace std;

int n = 5;
int main(){
    for(int i=1; i<n; i++){
        for(int j=1; j<=i; j++)
        {
            cout<<j;
        }
        for(int j=0; j<2*(n-i-1); j++)
        {
            cout<<" ";
        }
        for(int j=i; j>=1; j--)
        {
            cout<<j;
          
        }
    
        cout<<"\n";
    }


}

//output
// 1      1
// 12    21
// 123  321
// 12344321