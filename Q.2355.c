#include<stdio.h>
#include<math.h>
int main()
{
    int t,b;
    double g;
    while(1){
        scanf("%d",&t);
        if(t==0)break;
        b=t/90;
        g=(7.00*t)/90.00;
        printf("Brasil %d x Alemanha %.lf\n",b,ceil(g));
    }
}
