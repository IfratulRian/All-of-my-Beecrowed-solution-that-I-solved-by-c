#include<stdio.h>
#include<string.h>
int main()
{
    char string[1000];
    getchar();
    fgets(string,1000,stdin);
    int x=strlen(string);
    if(x>80){
        printf("NO");
    }
    else printf("YES");
}
