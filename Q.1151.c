#include<stdio.h>
int main()
{
    int a,j;
    scanf("%d",&a);
    int sum=0;
    for(int i=0; i<a; i++)
    {

         sum+=i;
    }
    for(int i=0;i<a;i++){
        printf("%d ",sum);
    }
}
