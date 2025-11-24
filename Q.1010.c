/*In this problem, the task is to read a code of a product 1,
the number of units of product 1, the price for one unit of
product 1, the code of a product 2, the number of units of
product 2 and the price for one unit of product 2. After this,
calculate and show the amount to be paid.*/

#include<stdio.h>
int main(){
int code1, units1, code2, units2;
double price1, price2, total;

scanf("%d %d %lf", &code1, &units1, &price1);
scanf("%d %d %lf", &code2, &units2, &price2);

total = (units1*price1)+(units2*price2);

printf("VALOR A PAGAR: R$ %.2lf\n", total);

return 0;
}
