#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,edge;
    while(1){
        scanf("%d %d %d",&a,&b,&c);
        if(a==0 && b==0 && c==0) break;
        int v=a*b*c;
        edge=cbrt(v);
        printf("%d\n",edge);
    }
}
