#include <iostream>
using namespace std;

void GCD(int n1, int n2)
{
    int qcd = 0;
    for (int i = 1; i <= min(n1, n2); i++)
    {
        if(n1 % i == 0  && n2 % i == 0 )   qcd = i;
    }
    cout<<qcd;
}

int gcd(int a , int b){
    while(a > 0 && b > 0) {
        if(a>b) a = a % b ;
        else b = b % a;
    }
    if(a == 0 ) return b;
    else return a;
}


int main()
{
    int a, b;
    cout << "Enter Two numbers"<<endl;
    cin >>a;
    cin >>b;
    cout<<gcd(a, b);
    return 0;
}
// int main()
// {
//     int n1, n2;
//     cout << "Enter Two numbers"<<endl;
//     cin >>n1;
//     cin >>n2;
//     GCD(n1, n2);
//     return 0;
// }