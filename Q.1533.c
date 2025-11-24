#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(1)
    {
        if(n==0) break;
        int score[n];
        for(int i=0; i<n;i++)
        {
            scanf("%d",&score[i]);
        }
        int first =0;
        int second =0;
        for(int i=1; i<n; i++)
        {
            if(first==0||score[i]>score[first])
            {
                second=first;
                first=i;
            }
            else if(second==0||score[i]>score[second])
            {
                if(score[i]<score[first])
                    second =i;
            }
        }
        printf("%d\n",second+1);
    }
    return 0;
}
