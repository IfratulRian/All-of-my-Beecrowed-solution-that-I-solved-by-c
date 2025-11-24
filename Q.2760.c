#include<string.h>
#include<stdio.h>
int main()
{
    char string1[105],string2[105],string3[105];

    fgets(string1,105,stdin);
    fgets(string2,105,stdin);
    fgets(string3,105,stdin);
    string1[strcspn(string1, "\n")] = '\0';
    string2[strcspn(string2, "\n")] = '\0';
    string3[strcspn(string3, "\n")] = '\0';
    printf("%s%s%s\n",string1,string2,string3);
    printf("%s%s%s\n",string2,string3,string1);
    printf("%s%s%s\n",string3,string1,string2);
    printf("%.10s%.10s%.10s\n",string1,string2,string3);
}
