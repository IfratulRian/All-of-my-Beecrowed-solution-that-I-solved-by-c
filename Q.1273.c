#include<stdio.h>
#include<string.h>
int main()
{
    while(1){
        int a;
        char word[1000];
        scanf("%d",&a);
        int max=0;
        for(int i=0;i<a;i++){
            scanf("%s",word[i]);
            int len=strlen(word[i]);
            if(len>max)max=len;
        }
        for(int i=0;i<n;i++){
            int spaces = max-len;
            for(int j=0;j<spaces;j++)printf(" ");
            printf("%s\n",word[i]);
        }
    }
}
