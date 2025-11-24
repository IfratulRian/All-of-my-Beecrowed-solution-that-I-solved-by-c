#include <stdio.h>

int main(){
    double salary,NewSalary,diff,n;
    scanf("%lf",&salary);

    if(salary>=0 && salary <= 400.0){
            n=0.15;
    }
    else if(salary>=400.01 && salary <= 800.0){
        n=0.12;
    }
    else if(salary>=800.01 && salary <= 1200.0){
        n=0.1;
    }
    else if(salary>=1200.01 && salary <= 2000.0){
        n=0.07;
    }
    else if(salary>=2000.01){
        n=0.04;
    }
    NewSalary = salary + (n * salary);
    printf("Novo salario: %.2lf\n",NewSalary);
    diff = NewSalary - salary;
    printf("Reajuste ganho: %.2lf\n",diff);
    printf("Em percentual: %.0lf %%\n",(n*100));

}
