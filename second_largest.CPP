#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    if ((a > b && a < c) || (a > c && a < b))
    {
        cout << "a is middle  element";
    }
    else if ((b > c && b < a) || (b < c && b > a))
    {
        cout << "b is middle number ";
    }
    else
    {
        cout << "c is middle number";
    }
}
