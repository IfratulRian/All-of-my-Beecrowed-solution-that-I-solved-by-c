#include<stdio.h>
int main()
{
    int n;
     while (scanf("%d", &n) != EOF) {
    int count = 0;
    int a[10000];
    char b[10000];

    for(int i=0;i<n;i++){

              scanf("%d %c",&a[i],&b[i]);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(a[i]==-10)continue;
                if(a[i]==a[j] && i!=j){
                        if (a[j] == -10) continue;
                    if((b[i]=='D'&&b[j]=='E')||(b[i]=='E'&&b[j]=='D')){
                        count++;
                        a[i]=a[j]=-10;
            break;
                    }
                }
            }
        }
         printf("%d\n",count);
     }



}
