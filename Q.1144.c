#include <stdio.h>
int main()
{
    int n,n1,n2;
    scanf("%d",&n);
    for(int i = 1; i<=n; i++)
    {
        n1=i*i;
        n2=i*i*i;
        printf("%d %d %d\n",i,n1,n2);
        printf("%d %d %d\n",i,n1+1,n2+1);
    }
}
