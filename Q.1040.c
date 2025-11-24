#include<stdio.h>

int main(){

double a,b,c,d,avg;

scanf("%lf %lf %lf %lf", &a,&b,&c,&d);
avg=((a*2)+(b*3)+(c*4)+(d*1))/10;
printf("Media: %.1lf\n",avg);

if(avg>=7.0){
    printf("Aluno aprovado.\n");
}
else if(avg>=5.0 && avg<=6.9){
    printf("Aluno em exame.\n");
    double e,avg1;
    scanf("%lf",&e);
    printf("Nota do exame: %.1lf\n",e);
    avg1=(avg+e)/2;
    if(avg1>=5.0){
        printf("Aluno aprovado.\n");
    }
    else {
        printf("Aluno reprovado.\n");
    }
    printf("Media final: %.1lf\n",avg1);
}
else{
    printf("Aluno reprovado.\n");
}

}
