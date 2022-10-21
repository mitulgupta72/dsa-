#include<stdio.h>

int main()
{
    long int  a, b, N, x=0;

    scanf("%ld %ld", &a, &b);

    if(a<b)
     { N = a;}
    else 
     { N = b;} 

    for(int i=2;i<=N;i++)
    {
        if(a%i == 0 && b%i == 0)
         { x++;}
    }

    if(x==0)
     { printf("YES"); }
    else
     { printf("NO"); }
}