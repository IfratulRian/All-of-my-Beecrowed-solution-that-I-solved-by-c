#include<stdio.h>
int main()
{
    double V,D;
    double r=D/2;
    while(scanf("%lf %lf",&V,&D) != EOF)
    {
        double r=D/2;
        double area = 3.14*r*r;
        double height = V/area;
        printf("ALTURA = %.2lf\n",height);
        printf("AREA = %.2lf\n",area);
    }
}
