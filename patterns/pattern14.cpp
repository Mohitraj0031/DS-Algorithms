#include<iostream>
using namespace std;

int n = 5;

int main(){
    for(int i=1; i<=n; i++){

        for(char ch='A'; ch<'A' + i; ch++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }


}