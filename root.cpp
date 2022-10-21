#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
   double sum;
    cin>>n;
    for(int i=1;i<=n;i++){
    sum+=sqrt(i);
    }
    cout<<sum;
}