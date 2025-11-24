#include<stdio.h>
int func(int fact);
int main()
{
   int a;
scanf("%d",&a);
   int result= func(a) ;
   printf("%d\n",result);
}

int func(int fact){
int fac =1;
for(int i=1;i<=fact;i++){
    fac*=i;
}
return fac;
}
