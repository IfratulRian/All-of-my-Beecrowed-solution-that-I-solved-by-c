#include<stdio.h>
int main()
{
    int a,b;
    int sum=0;
    scanf("%d %d",&a,&b);
    int arr[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<a;i++){
        int count=0;
        for(int j=0;j<b;j++){
            if(arr[i][j]>0){
                count++;
            }
            else{
                count=0;
            }
        }
        if(count==b){
            sum++;
        }
    }
    printf("%d",sum);
}
