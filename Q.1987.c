#include<stdio.h>
int main()
{
    int n;
    char c[1005];
    while(scanf("%d %s",&n,&c) != EOF){
    int sum=0;
    for(int i=0;c[i] != '\0';i++){

        sum +=c[i]-'0';
    }

    if(sum%3==0){
        printf("%d sim\n",sum);
    }
    else{
        printf("%d nao\n",sum);
    }

    }
}
