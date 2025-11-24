#include<stdio.h>
int main()
{
    int a,b,c;
    int ab[10005];
    int arr[10005];
    scanf("%d %d",&a,&b);
    for(int i=0;i<b;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<b;i++)
    {
        for(int j=1;j<=a;j++){
            if(arr[i]!=j){
                printf("%d ",j);
                break;
            }

        }
    }
}
