#include<stdio.h>
#include<string.h>
int main()
{

      int a,b[100];
    char x[30];
    while(scanf("%s",x) !=EOF){
       scanf("%d",&a);
    for(int j=0;j<a;j++){
        scanf("%d",&b[j]);
    }
    for(int i=0;i<a;i++){
        printf("%c",x[b[i]-1]);
    }
    printf("\n");
    }



}
