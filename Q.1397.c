#include<stdio.h>

int main()
{
    int a;
    while(1)
    {
        scanf("%d",&a);
        if(a==0)
            break;
        int k=0;
        int j=0;
        for(int i=0; i<a; i++)
        {
            int x,y;
            scanf("%d %d",&x,&y);

            if (x>y)
            {
                j++;
            }
            else if(y>x)
            {
                k++;
            }
        }
        printf("%d %d\n",j,k);

    }

}
