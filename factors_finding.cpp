
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,s=0;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        if(N%i==0){
            s++;
        }
    }
    cout<<s<<endl;
    for (int i = 1; i <= N; i++)
    {
        if(N%i==0){
            cout<<i<<" ";
        }
    }
    
}
