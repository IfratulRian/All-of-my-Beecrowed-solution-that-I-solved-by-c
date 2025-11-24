#include<stdio.h>
int main()
{
    int a,b;

    while(scanf("%d %d",&a,&b) !=EOF){
       int arr[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<a;i++){
        int count=0;
        for(int j=0;j<b;j++){
            if(arr[i][j]==1)printf("9");
        else{
            if(i>0&&arr[i-1][j]==1)count++;
            if(i<a-1 && arr[i+1][j]==1)count++;
            if(j>0&&arr[i][j-1]==1)count++;
            if(j<b-1&&arr[i][j+1]==1)count++;
            printf("%d",count);
        }

        }
        printf("\n");
    }
    }

}
