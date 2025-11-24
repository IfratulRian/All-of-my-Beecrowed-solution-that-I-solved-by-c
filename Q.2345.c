#include<stdio.h>
int main()
{
    int a;
    int max=0,min=10000,sum=0;
    for(int i=0;i<4;i++)
    {
        scanf("%d",&a);
        if(a>max){
            max=a;
        }
        if(a<min){
            min=a;
        }
        sum+=a;
    }
    int sum1=max+min;
    int sum2=sum-sum1;
    int diff;
    if(sum1>sum2){
        diff=sum1-sum2;
        printf("%d\n",diff);
    }
    else if(sum1<sum2){
        printf("%d\n",diff);
    }
}
