#include<stdio.h>
#include<string.h>
int main()
{
    int n,l,c;
    char sen[1005];
    while(scanf("%d %d %d",&n,&l,&c)!=EOF){
        fgets(sen, sizeof(sen), stdin);
        int x=strlen(sen)-1;
        int div=x/c;
        int page=div/l;
        if(x%c==0){
            printf("%d\n",page);
        }
        else if(x%c!=0){
            printf("%d\n",page+1);
        }
    }
}
