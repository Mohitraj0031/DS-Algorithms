#include<iostream>
using namespace std;

int n = 5;

int main(){
    for(int i =0; i<n; i++)
    {
        for(char ch='E'-i; ch<='E'; ch++)
            {
                cout<<ch<<" ";
            }
      
         cout<<endl;
    }
 

}

//output
// E 
// D E 
// C D E 
// B C D E 
// A B C D E 