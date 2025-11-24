#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF){
        int arr[n][n];
        int odd=n%2;
int mid=(n/2);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){

                if(i==j){


                    if(odd !=0 && i==mid && j==mid){

                        printf("2");
                    }
                    else{
                        printf("1");
                    }

                    }

                else if(j==n-i-1&& i==i){
                        printf("2");
                }


                else{
                    arr[i][j]=3;
                printf("%d",arr[i][j]);
                }

            }
            printf("\n");

        }

    }
}
