#include <stdio.h>

int main(){

double a,b,c;
scanf("%lf %lf %lf",&a,&b,&c);

if( (a<(b+c)) && (b<(a+c)) && (c<(a+b)) ){
    double p=(a+b+c);
    printf("Perimetro = %.1lf",p);
}
else{
    double area = (a+b)*c/2.0;
    printf("Area = %.1lf",area);
}
}
