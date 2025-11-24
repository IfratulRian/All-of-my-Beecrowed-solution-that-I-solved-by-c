#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d\n%d",&n,&m);


    int start = n < m ? n : m;
    int end   = n > m ? n : m;
    for(int i = start+1; i<end; i++)
    {
        if (i%5==2||i%5==3)
        {
            printf("%d\n",i);
        }

    }

    return 0;
}
