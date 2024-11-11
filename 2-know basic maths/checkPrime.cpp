#include<iostream>
using namespace std;

int main (){
    int count = 0;
    int n = 6;
    for(int i=1; i<=n; i++){
        if(n % i == 0 ){
            count++;
        }
    }

    if(count == 2){
        cout<<" Prime Number: "<<n<<endl;
    }else{
        cout<<" Not a Prime : "<<n<<endl; 
    }

    return 0;

}