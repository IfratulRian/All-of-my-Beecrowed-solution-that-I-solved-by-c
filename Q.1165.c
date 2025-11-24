#include <stdio.h>

int main()
{
    int a,p;
    scanf("%d",&a);
    while( 1)
    {
        scanf("%d",&p);
        for(int i=1; i<p; i++)
        {
            if(p%i!=0)
            {
                printf("%d eh primo\n",p);
            }
            else if(p%i==0)
            {
                printf("%d nao eh primo\n",p);
            }
        }
    }
}
