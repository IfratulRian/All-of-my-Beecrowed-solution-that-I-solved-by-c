#include<stdio.h>
int main()
{
    int arr[20];
    int i;
    for(i=0;i<20;i++)
    {
        scanf("%d",&arr[i]);

    }
    int temp[19];
    for(int j=0;j<20;j++)
    {
        temp[j]=arr[19-j];
        printf("N[%d] = %d\n",j,temp[j]);
    }
}
