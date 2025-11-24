#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000],b[10];
    while(1)
    {
        fgetc(a,1000,stdin);
        fgetc(b,10,stdin);
        int x=strlen(a);
        for(int i=0;i<x;i++){
            if(i%3==0){
                printf(",%c",a[i]);
            }
            else printf("%c",a[i]);
        }
    }
}
