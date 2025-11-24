/*Read four integer values named A, B, C and D.
Calculate and print the difference of product A and B by
the product of C and D (A * B - C * D).*/
#include<stdio.h>
int main(){
int A,B,C,D,DIFERENCA;
scanf("%d\n%d\n%d\n%d", &A,&B,&C,&D);
DIFERENCA=(A*B-C*D);
printf("DIFERENCA = %d\n", DIFERENCA);
return 0;
}
