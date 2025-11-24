#include<stdio.h>

int main(){

double n;
scanf("%lf",&n);

int total = (int)(n*100+0.5);

int note[]={10000,5000,2000,1000,500,200};
int coin[]={100,50,25,10,5,1};

printf("NOTAS:\n");
for(int i=0;i<6;i++){
    int num = total/note[i];
    printf("%d nota(s) de R$ %.2lf\n", num,note[i]/100.0);
    total %= note[i];
}

printf("MOEDAS:\n");
for(int i=0;i<6;i++){
    int num =total/coin[i];
    printf("%d moeda(s) de R$ %.2lf\n", num,coin[i]/100.0);
    total%=coin[i];
}
return 0;
}
