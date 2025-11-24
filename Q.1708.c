#include<stdio.h>
int main(){
int a,b;
scanf("%d %d",&a,&b);
for(int i=1;;i++){
    int diff=a-b;
    if((b+diff-1)/diff==0){
        printf("%d\n",i);
        return 0;
    }
}
}
