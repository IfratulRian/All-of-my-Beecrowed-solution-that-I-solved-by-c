#include<stdio.h>
#include<string.h>

int main()
{
    int a,b;
    char s[500];
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%s %d",s,&b);
        if(strcmp(s,"Thor")){
            printf("N\n");
        }
        else{
            printf("Y\n");
        }
    }
}
