#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n) !=EOF)
{

 double mit,mxt;
    scanf("%lf",&mxt);
    for(int i=1; i<n; i++)
    {
        scanf("%lf",&mit);
        if(mxt>mit)
        {
            mxt = mit;
        }    printf("%.2lf\n",mxt);

    }

}}
