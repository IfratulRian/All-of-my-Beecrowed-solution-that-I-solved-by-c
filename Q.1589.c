#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int i =0; i<a; i++)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        int sum = x+y;
        printf("%d\n",sum);
    }
}
