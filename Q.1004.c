/*Read two integer values. After this, calculate the product between them and store the result in a variable named PROD.
Print the result like the example below.
Do not forget to print the end of line after the result, otherwise you will receive “Presentation Error”.*/

#include <stdio.h>
int main(){
int a,b,PROD;
scanf("%d\n%d", &a,&b);
PROD = a*b;
printf("%d\n", PROD);
return 0;
}

