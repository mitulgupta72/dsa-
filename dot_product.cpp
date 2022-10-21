#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n],Arr[n];
    for(int i=0;i<n;i++){
        cout<<i;
        cin>>arr[i]; 
    }
    cout<<"next";
    for(int j=0;j<n;j++){
        cout<<j;
        cin>>Arr[j];
    }
    cout<<"done";
   long dot=0;
    for(int i=0;i<n;i++){
    int m=arr[i]*Arr[i];
    // cout<<m;
    // int mi[1]+=m;
    dot+=m;
    }
    cout<<dot;
}