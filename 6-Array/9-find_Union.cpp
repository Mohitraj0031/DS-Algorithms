#include<bits/stdc++.h>
using namespace std;

vector <int> findUnion(int a1[],int a2[],int n1,int n2){
    set <int> st;
    vector<int> Union;
    for(int i=0; i<n1; i++){
        st.insert(a1[i]);
    }
    for(int i=0; i<n2; i++){
        st.insert(a2[i]);
    }

    for(auto & it: st ){
        Union.push_back(it);
    }

    return Union;

}

int main(){
    int a1 [] = {1,2,3,4,5,5,7};
    int a2 [] = {2,3,4,4,5,6,6};
    int n1 = sizeof(a1)/sizeof(a1[0]);
    int n2 = sizeof(a2)/sizeof(a2[0]);
    vector<int> Union = findUnion(a1,a2,n1,n2);
    cout<<"Union of a1 and a2  is : "<<endl;
    for(auto & val : Union){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}