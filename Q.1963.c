#include<stdio.h>
int main(){
double a,b;
scanf("%lf %lf",&a,&b);
double p=((b-a)/a)*100;
printf("%.2lf%%",p) ;
}
