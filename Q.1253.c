#include<stdio.h>
#include<string.h>

int main(){
    int number;
    while(scanf("%d",&number)!=EOF)
    char text[55][55];
    int shift[55];
    for(int i=0;i<number;i++){
        scanf("%s",text[i]);
        scanf("%d",&shift[i]);
    }
    for(int i=0;i<number;i++){
        int len=strlen(text[i]);
        for(int j=0;j<len;j++){
            char c=text[i][j];
            c=c-shift[i];
            if(c<'A') c=c+26;
            text[i][j]=c;
        }
        printf("%s\n",text[i]);
    }
}
