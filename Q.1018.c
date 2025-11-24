#include<stdio.h>

int main(){
int n;
scanf("%d",&n);
printf("%d",n);
int notes[]={100,50,20,10,5,2,1};

int a,i,r=n;

for(i=0;i<7;i++){
    a=r/notes[i];
    r=r%notes[i];
    printf("%d nota(s) de R$ %d,00\n",a,notes[i]);
}
return 0;
}
