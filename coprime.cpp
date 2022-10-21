#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N,n, m, r=1;
    cin >> n >> m;
    if(n>m){
        N=m;

    }
    else{
        N=n;
    }
    for (int i = N;i > 0;i--)
    {
        if (i % n == 0 && i % m == 0)
        {
            r = 0;
        }
       
    }
    if (r != 1)
    {
        cout << "coprime";
    }
    else
    {
        cout << "not coprime";
    }
}