#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d",&a)!=EOF)
    {
        int arr[a];
        int max=0;
        int max2=0;
        for(int i=0;i<a;i++){

            scanf("%d",&arr[i]);
            if(max<arr[i]){
                max2=max;
                max=arr[i];
            }
            else if(arr[i]<max&&max2<arr[i]){
                max2=arr[i];
            }
        }
        int g=a/2;
        int f=arr[a-1]-arr[a-2];
        printf("%d %d",g,f);
    }
}
