#include<iostream>
using namespace std;

int n = 5;
int num=1;
int main(){
    for(int i=1; i<=n; i++){

        for(int j=1; j<=i; j++)
        {
            cout<<num<<" ";
            num = num + 1;
            
        }
        cout<<endl;
    }


}

// output
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 
