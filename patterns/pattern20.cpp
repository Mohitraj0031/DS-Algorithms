#include<iostream>
using namespace std;

int n = 5;
int main(){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"*";
        }

        for(int j=0; j<2*(n-i-1); j++)
        {
            cout<<" ";
        }
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        
        cout<<"\n";
    }

     for(int i=1; i<n; i++){

        for(int j=0; j<n-i; j++){
            cout<<"*";
        }
          for(int j=0; j<2*(i); j++)
        {
            cout<<" ";
        }
        for(int j=0; j<n-i; j++){
            cout<<"*";
        }
        cout<<"\n";
    }


}

//output

// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *