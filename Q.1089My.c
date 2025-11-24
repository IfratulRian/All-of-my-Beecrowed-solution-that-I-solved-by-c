#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    int count=0,i1st=-100000,i2nd=-1000000;
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
     for(int i=1;i<a;i++){
        if((arr[i-1]>arr[i] && arr[i+1]>arr[i])||(arr[i-1]<arr[i]&&arr[i+1]<arr[i])){
            count++;
        }
    }
    printf("%d\n",count);
}
