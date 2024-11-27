#include<bits/stdc++.h>
using namespace std;

vector<int> rotate_array(vector <int> &arr,int n){

    int j = -1;
    for(int i = 0; i<n; i++){
        if(arr[i] == 0){
            j= i;
            break;
        }
    }

    for(int i=j+1; i<n; i++){
        if(arr[i] != 0){
            swap(arr[i],arr[j]);
            j++;
        }
    }

return arr;



//     vector <int> temp;

//     for(int i= 0; i<n; i++){
//         if(arr[i] != 0 ){
//             temp.push_back(arr[i]);
//         }
//     }

//     int nz = temp.size();
    
//     for(int i= 0; i<nz; i++){
//         arr[i] = temp[i];
//     }

//     for(int i = nz; i<n; i++){
//         arr[i] = 0;
//     }

// return arr;

}

int main(){
    vector<int> arr = {1,2,0,0,0,2,2,0};
    int n = arr.size();
    cout<<n<<endl;
    rotate_array(arr,n);
    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";
    }
    return 0;
}