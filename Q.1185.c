#include<stdio.h>
int main()
{
    char a;
    double n[12][12],sum=0.0,count=0;
    scanf(" %c",&a);
    for(int i=0; i<12; i++)
    {
        for(int j=0; j<12; j++)
        {
            scanf("%lf",&n[i][j]);
            if(i+j>11)
            {
                sum += n[i][j];
                count++;
            }
        }
    }
    if(a=='S')
    {
        printf("%.1lf\n",sum);
    }
    else if(a=='M')
    {
        double avg = sum/count;
        printf("%.1lf\n",avg);
    }
}

