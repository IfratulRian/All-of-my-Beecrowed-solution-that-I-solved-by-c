
#include <stdio.h>

int main(){

int a,b,c,d;
scanf("%d %d %d %d",&a,&b,&c,&d);

if (a>c){
    int s1=(a*60)+b;
    int s2=(c*60)+d;
    int s3=s1-s2;
    int a1=s3/60;
    int b1=s3%60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",a1,b1);
}
else if(a<c){
    int s1=(a*60)+b;
    int s2=(c*60)+d;
    int s3=s2-s1;
    int a1=s3/60;
    int b1=s3%60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",a1,b1);
}

else if(a==c && b==d){
    printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)");
}
}
