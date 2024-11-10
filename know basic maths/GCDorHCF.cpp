#include<iostream>
using namespace std;

void GCD(int a , int b){
        for(int i = 1; i<=a; i++) {
            int first = 0;
            first  = i;
            cout<<endl;
        }
        for(int j = 1; j<=b; j++){
            int second = 0 ;
            second = j;
            cout<<endl;
        }

}

int main(){
    int a , b;
    cout<<"Enter Two numbers";
    cin>>a;
    cin>>b;
    GCD(a,b);
    return 0 ;
}