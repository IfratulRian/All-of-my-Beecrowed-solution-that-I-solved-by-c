#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d",&x);
    while(1)
    {
        scanf("%d",&y);
        if(x<y) break;
    }
    int count=0;
    int sum =0;
    for(int i=x; sum<=y; i++)
    {

        sum+=i;
        count++;
    }

    printf("%d\n",count);
}
