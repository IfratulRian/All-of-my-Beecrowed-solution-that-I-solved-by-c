#include<stdio.h>
int main()
{
    int n;
    char a;
    double v[12][12];
    double sum=0.0;

    scanf("%d",&n);
    scanf(" %c",&a);

    for(int i=0; i<12; i++)
    {
        for(int j=0; j<12; j++)
        {
            scanf("%lf",&v[i][j]);
        }
    }
    for(int j=0; j<12; j++)
    {
        sum += v[n][j];
    }
    if(a=='S')
    {
        printf("%.1lf\n",sum);
    }
    else if(a=='M')
    {
        double avg = sum/12.0;
        printf("%.1lf\n",avg);
    }
}
