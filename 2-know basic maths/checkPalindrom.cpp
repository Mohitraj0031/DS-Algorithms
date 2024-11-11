#include<iostream>
using namespace std;

int n =  1222;

int main(){

int revNum = 0;

int N = n ;

while(n>0)
{
int digit = n % 10 ;
revNum = (revNum * 10) + digit; 
n = n/10;
}

if(revNum == N)
{
    cout<<"Palindrom";
}else{
    cout<<"Not a Palindrom";
}


return 0 ;
}