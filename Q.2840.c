#include<stdio.h>
int main()
{
    int r,V;
    scanf("%d %d",&r,&V);
    int v = 4*3.1415*r*r*r/3;
    int n=V/v;
    printf("%d\n",n);
}
