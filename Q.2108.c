#include <stdio.h>
#include <string.h>

int main() {
    char line[1000];
    while(fgets(line,sizeof(line),stdin)!=EOF){
        int length=strlen(line);
        int count=0;
        getchar();
        for(int i=0;i<length;i++){
            if(line[i]!=' ' && line[i - 1] == ' ')count++;

        }
        printf("%d\n",count);
    }
}
