#include<iostream>
using namespace std;

int n = 4;

int main(){
    for(int i =0; i<n; i++)
    {

        for(int j=0; j<=n-i-1; j++)
        {
            cout<<" ";
        }
        for(char ch='A'; ch<='A' + i; ch++)
        {
            cout<<ch;
            
        }
        for(char ch='A'+(i-1); ch>='A'; ch--)
            {
                cout<<ch;
            }
      
         cout<<endl;
    }
 

}

//output
//     A
//    ABA
//   ABCBA
//  ABCDCBA