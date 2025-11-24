#include<stdio.h>
#include<string.h>
int main()
{
    char number[1000];
    fgets(number,1000,stdin);
    int x=strlen(number);
    if(number[x-1]=='\n'){
        number[x-1]='\0';
        x--;
    }
    int count=0;
    for(int i=0;i<x;i++){
        if(number[i]=='1'){
            count++;
        }
    }
    if(count%2==1){
        printf("%s1",number);
    }
    else{
        printf("%s0",number);
    }
}
