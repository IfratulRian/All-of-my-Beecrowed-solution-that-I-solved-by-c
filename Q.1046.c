#include<stdio.h>

int main(){

int s,e,d=24;
scanf("%d %d",&s,&e);

if(s==e){
    printf("O JOGO DUROU 24 HORA(S)");
}
else if(e>s){
    printf("O JOGO DUROU %d HORA(S)",e-s);
}
else if(s>e){
    printf("O JOGO DUROU %d HORA(S)",24-s+e);
}
}
