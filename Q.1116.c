#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d",&n);
          for(int i=1; i<=n; i++)
{
    scanf("%d %d",&a,&b);
        if(b!=0)
        {
            double div=(double)a/b;
            printf("%.1lf\n",div);
        }
        else if(b==0)
        {
            printf("divisao impossivel\n");
        }
    }
}
