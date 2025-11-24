#include<stdio.h>

int main()
{
    int n,a;
    scanf("%d",&n);
    while(1)
    {
        scanf("%d",&a);
        for(int i=0; i<=a; i++)
        {
            int count = 0;
            if(a%2==0)
            {
                count++;
                printf("%d Multiplo(s) de 2\n",count);
            }
            if(a%3==0)
            {
                count++;
                printf("%d Multiplo(s) de 3\n",count);
            }
            if(a%4==0)
            {
                count++;
                printf("%d Multiplo(s) de 4\n",count);
            }
            if(a%5==0)
            {
                count++;
                printf("%d Multiplo(s) de 5\n",count);
            }
        }
    }
}
