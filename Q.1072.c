#include<stdio.h>

int main(){

int a,b,ins=0,o=0;
scanf("%d",&a);

for(int i=0; i<a; i++){
    scanf("%d",&b);

    if (b>=10 && b<=20){
        ins++;
    }
    else{
        o++;
    }
}

printf("%d in\n",ins);
printf("%d out\n",o);

}
