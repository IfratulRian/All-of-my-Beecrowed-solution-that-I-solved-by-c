#include<stdio.h>
int main()
{
    int y;
    int first = 1;
    while(scanf("%d",&y) != EOF)
    {
        if(!first)
        {
            printf("\n");
        }
        first = 0;

        if((y%4==0 && y%100!=0) || y%400==0)
        {
            printf("This is leap year.\n");
            if(y%15==0)
            {
                printf("This is huluculu festival year.\n");
            }
            if(y%55==0)
            {
                printf("This is bulukulu festival year.\n");
            }
        }

        else if(y%15==0)
        {
            printf("This is huluculu festival year.\n");
        }

        else
        {
            printf("This is an ordinary year.\n");
        }
    }
    return 0;
}
