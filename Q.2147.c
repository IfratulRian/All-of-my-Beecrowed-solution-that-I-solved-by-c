#include <stdio.h>
#include <string.h>

int main() {
char num[11000];
int n;
scanf("%d",&n);
for(int i=0;i<n;i++){
    scanf("%s",num);
int count=1;
int l=strlen(num);
double m;
for(int j=1;j<l;j++){

        count++;


    m=count/100.0;
}
printf("%.2lf\n",m);
}
}

