#include<stdio.h>

int main()
{
    int s[4],sum=0;
    for(int i=0;i<4;i++){
        scanf("%d",&s[i]);
            sum += s[i]-1;

    }
    printf("%d",sum+1);
}
