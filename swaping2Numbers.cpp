#include<iostream>
#define newline "\n"
#define pi 3.14
int main(){
    int a,b,temp=0;
    a=5;
    b=10;
    std::cout<<"a="<<a<<"\n";
    std::cout<<"b="<<b<<"\n";
    temp=a;
    a=b;
    b=temp;
    std::cout<<"a="<<a<<"\n";
    std::cout<<"b="<<b<<"\n";
    return 0;
    
}