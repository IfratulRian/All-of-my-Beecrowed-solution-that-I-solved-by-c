#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n;
    char c[5];
    while(scanf("%d",&n),n!=0)
    {
        int left=0,right=0;
        int sum=0;
        for(int i=0;i<n;i++){
            scanf("%s",c);
            if(strcmp(c,"E")){
                sum--;
            }
            else if(strcmp(c,"D")){
                sum++;
            }
        }
        sum=abs(sum);
        if(sum<=4){
            if(sum==0&&sum==4)printf("N\n");
            else if(sum==1)printf("L\n");
            else if(sum==2)printf("S\n");
            else if(sum==3)printf("O\n");
        }
        else {
                int rem=sum%4;
            if(rem==4)printf("N\n");
            else if(rem==1)printf("L\n");
            else if(rem==2)printf("S\n");
            else if(rem==3)printf("O\n");
        }
    }
}
