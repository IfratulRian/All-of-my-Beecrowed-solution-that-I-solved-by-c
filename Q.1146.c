#include<stdio.h>

int main()
{
    int a;

    while(1)
    {
        scanf("%d",&a);
        if (a == 0)break;
        for(int i=1; i<=a; i++)
        {
            if(i==a)

                printf("%d\n",i);

            else

                printf("%d ",i);

        }
    }
    return 0;
}
