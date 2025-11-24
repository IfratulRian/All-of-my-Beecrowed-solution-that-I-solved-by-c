#include<stdio.h>
#include<string.h>

int unique(int x)
{
    int seen[10]={0};
    while(x>0)
    {
        int d=x%10;
        if(seen[d])return 0;
        seen[d]=1;
        x/=10;
    }
    return 1;
}
int main()
{
    int n,m;
    while(scanf("%d %d",&n,&m)== 2)
    {
        int c=0;
        for(int i=n;i<=m;i++)
        {
            if(unique(i))c++;
        }
        printf("%d\n",c);
    }
    return 0;
}
