#include<stdio.h>
#include<string.h>
int main()
{
    int a;
    scanf("%d",&a);
    char string[1000];
     getchar();
    for(int i=0;i<a;i++){
        fgets(string,1000,stdin);
        printf("I am Toorg\n");
    }
    return 0;
}
