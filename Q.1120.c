#include<stdio.h>
#include<string.h>
int main()
{
    while(1){
        char a[1000],b[1000];
        scanf("%c %c",&a,&b);
        int x=strlen(b);
        for(int i=0;i<x;i++){
            if(b[i]=='a')continue;
            else printf("%c",b[i]);
        }
    }
}
