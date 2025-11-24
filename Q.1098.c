#include<stdio.h>

int main()
{
    double I,J;
    for(double i=0; i<=2; i=i+0.2)
    {
        for(int j=1; j<=3; j++)
        {
            J=j+i;
            if((i>0 && i<1) || (i>1 && i<2.0) )
            {

                printf("I=%0.1lf J=%0.1lf\n",i,J);
                //printf("  %lf  \n",i);
            }
            else
            {
                printf("I=%d J=%d\n",(int)i,(int)J);
            }
        }
    }

}

