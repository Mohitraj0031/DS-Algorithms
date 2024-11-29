#include <bits/stdc++.h>
using namespace std;

void find_MissingNumber(int arr[], int n)
{

    for (int i = 0; i <= n; i++)
    {
        int flag = 1;

        if (arr[i] != flag)
        {
            cout << i << " ";
        }
        flag++;
    }
}

int main()
{
    int arr[] = {1, 2, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    find_MissingNumber(arr, n);
    return 0;
}