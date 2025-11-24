#include<stdio.h>
int main()
{
    int n,a,sum,s1=0,s2=0,s3=0;
    char c;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d %c",&a,&c);
        sum+=a;
        if(c=='C')
        {
            s1+=a;
        }
        else if(c=='R')
        {
            s2+=a;
        }
        else if(c=='S')
        {
            s3+=a;
        }
    }
    printf("Total: %d cobaias\n",sum);
    printf("Total de coelhos: %d\n",s1);
    printf("Total de ratos: %d\n",s2);
    printf("Total de sapos: %d\n",s3);

    printf("Percentual de coelhos: %.2f %%\n", (s1 * 100.0) / sum);
    printf("Percentual de ratos: %.2f %%\n", (s2 * 100.0) / sum);
    printf("Percentual de sapos: %.2f %%\n", (s3 * 100.0) / sum);

}
