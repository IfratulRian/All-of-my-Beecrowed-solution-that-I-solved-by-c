#include<stdio.h>
#include<string.h>
int main(){
    char line[1005];
    int first = 1;
    while(fgets(line,1005,stdin)){
        int x=strlen(line);
        if(x>0 && line[x-1]=='\n'){
            line[x-1]='\0';
            x--;
        }
        if(x>0 && line[x-1]=='\r'){
            line[x-1]='\0';
            x--;
        }

        if(!first) printf("\n");
        first = 0;

        for(int i=0;i<x;i++){
            if((line[i+1]==','||line[i+1]=='.') && i>0 && line[i]==' ')
                continue;
            printf("%c", line[i]);
        }
    }
    return 0;
}
