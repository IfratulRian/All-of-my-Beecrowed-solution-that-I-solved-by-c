#include<stdio.h>
#include<math.h>
int main()
{
    int r,w,l;
    int i=1;
    while(1)
    {
        scanf("%d %d %d",&r,&w,&l);
        if(r==0) break;

        if(sqrt(w*w + l*l) <= 2*r)
        {
            printf("Pizza %d fits on the table.\n",i);
        }
        else
        {
            printf("Pizza %d does not fit on the table.\n",i);
        }

        i++;
    }
}
