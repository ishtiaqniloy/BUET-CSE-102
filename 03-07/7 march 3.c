#include<stdio.h>
int main(){
    char num1,num2;
    int a,b,sum,sub,mul;
    scanf("%c %c",&num1,&num2);  //IMPORTANT
    a=num1-'0';
    b=num2-'0';
    sum=a+b;
    sub=a-b;
    mul=a*b;
    printf("addition : %d\nsubstraction : %d\nmultiplication : %d\n",sum,sub,mul);
    return(0);
}
