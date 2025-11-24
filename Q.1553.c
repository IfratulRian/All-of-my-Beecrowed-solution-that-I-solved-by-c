#include<stdio.h>
#define change -9999999
int main()
{
    int number,frequent;
    while(scanf("%d %d",&number,&frequent))
    {
        if(number==0)break;
        int array[number];
        for(int i=0;i<number;i++)
        {
            scanf("%d",&array[i]);
        }

        int count2=0;
        for(int i=0;i<number;i++)
        {
            int count=0;
            for(int j=i;j<number;j++){
                if(array[i]==array[j]){
                    count++;
                }
            }
            int alreadyCounted = 0;
            for(int k = 0; k < i; k++) {
                if(array[k] == array[i]) {
                    alreadyCounted = 1;
                    break;
                }
}
            if(count>=frequent && !alreadyCounted){
                count2++;

        }

    } printf("%d\n",count2);
}
}
