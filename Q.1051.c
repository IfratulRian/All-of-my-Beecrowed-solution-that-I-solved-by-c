#include<stdio.h>

int main(){

double salary,Nsalary;
scanf("%lf",&salary);

if(salary<=2000.00 && salary>=0.00){
    printf("Isento\n");
    return 0;
}

else if(salary<=3000.00 && salary>2000.00){
    Nsalary = 0.08*(salary-2000.00);
}

else if(salary<=4500.00 && salary>3000.00){
    Nsalary = 80.00+ 0.18*(salary-3000.00);
}

else if(salary>4500.00){
    Nsalary = 350.00 + 0.28*(salary-4500.00);
}
printf("R$ %.2lf\n",Nsalary);
}
