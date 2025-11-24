#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int n[a][b];
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            scanf("%d",&n[i][j]);
        }
    }
     for(int i=1; i<a-1; i++)
    {
        for(int j=1; j<b-1; j++)
        {
             if( n[i-1][j-1]==7 &&
        n[i-1][j]==7 &&
        n[i-1][j+1]==7 &&
        n[i][j-1]==7 &&
        n[i][j+1]==7 &&
        n[i+1][j-1]==7 &&
        n[i+1][j]==7 &&
        n[i+1][j+1]==7 &&
        n[i][j]==42
)
    {
        printf("%d %d\n",i+1,j+1);
    }
    else{
        printf("0 0\n");
    }
        }
    }

}
