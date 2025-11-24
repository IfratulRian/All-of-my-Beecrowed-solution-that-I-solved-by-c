
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int number[n];

    for(int i = 0; i<n; i++)
    {
        scanf("%d",&number[i]);

    }
    int drop= 0;
    for(int i=1; i<n; i++)
    {
        if(number[i]<number[i-1])
        {
            drop = i+1;
            break;
        }
    }printf("%d\n",drop);
}
