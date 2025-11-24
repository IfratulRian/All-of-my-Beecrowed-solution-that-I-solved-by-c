#include<stdio.h>
int main()
{
    int n,t;
    long long fib[65];
    fib[0]=0;
    fib[1]=1;
    for(int i=2; i<=60; i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&t);
        printf("Fib(%d) = %lld",t,fib[t]);
    }
}
