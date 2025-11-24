#include<stdio.h>
int main(){
int N,y,m,d;
scanf("%d",&N);
y=N/365;
m=(N%365)/30;
d=(N-365)-30;
printf("%d ano(s)\n%d mes(s)\n%d dia(s)",y,m,d);
return 0;
}

