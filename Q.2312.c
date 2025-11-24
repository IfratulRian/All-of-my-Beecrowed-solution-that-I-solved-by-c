#include<stdio.h>
#include<string.h>
int main(){
    int number;
    scanf("%d",&number);
    int g[505],s[505],b[505];
    char name[505][101];
    for(int i=0;i<number;i++){
        scanf("%s %d %d %d",name[i],&g[i],&s[i],&b[i]);
    }
    for(int i=0;i<number-1;i++){
        for(int j=i+1;j<number;j++){
            if(g[i]<g[j]||(g[i]==g[j]&&s[i]<s[j])||(g[i]==g[j]&&s[i]==s[j]&&b[i]<b[j])||(g[i]==g[j]&&s[i]==s[j]&&b[i]==b[j]&&strcmp(name[i],name[j])>0)){
                char tmp[101];
                strcpy(tmp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],tmp);
                int tg=g[i],ts=s[i],tb=b[i];
                g[i]=g[j];s[i]=s[j];b[i]=b[j];
                g[j]=tg;s[j]=ts;b[j]=tb;
            }
        }
    }
    for(int i=0;i<number;i++){
        printf("%s %d %d %d\n",name[i],g[i],s[i],b[i]);
    }
}
