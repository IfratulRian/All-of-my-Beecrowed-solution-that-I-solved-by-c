#include<stdio.h>

int lamp();
int lamp();

int main()
{
    int n,count;
    scanf("%d",&n);
    int m=n+1;
int arr[m][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<n;i++){
            count=0;
        for(int j=0;j<n;j++)
        {
            if((arr[i][j]==1 && arr[i][j+1]==1) || (arr[i+1][j]==1 && arr[i+1][j+1]==1) || (arr[i][j]&&arr[i+1][j]) || (arr[i][j] && arr[i+1][j+1]) || (arr[i+1][j] && arr[i][j+1]) || (arr[i+1][j+1] && arr[i][j+1]))

            {
                count++;
    printf("S");
            }
            else{
                printf("U");
            }

        }
        printf("\n");
    }
}


