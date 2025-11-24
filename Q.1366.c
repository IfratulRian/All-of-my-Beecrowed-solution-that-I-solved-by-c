#include<stdio.h>
int main()
{
    int a;
    while(scanf("%d",&a) ,a!= 0)
    {
        int arr[a][2];
        for(int i=0; i<a; i++)
        {
            for(int j=0; j<2; j++)
            {
                scanf("%d",&arr[i][j]);
            }
        }
        int sum = 0;
        int div;
        for(int i=0; i<a; i++)
        {
            div=arr[i][1]/2;
            sum+=div;
        }
        int ans=sum/2;
        printf("%d\n",ans);
    }
    return 0;

}
