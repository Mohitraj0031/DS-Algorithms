#include<iostream>
using namespace std;

int n = 5;

int main(){
    for(int i=0; i<=n; i++){

        for(char ch='A'; ch<'A' + (n-i); ch++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }


}