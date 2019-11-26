#include<stdio.h>
int main(){
    float x;
    int ceil,round;
    scanf("%f",&x);
    ceil=(int)x;
    round=(int)(x-0.499999);
    printf("ceil %.2f : %d\nround %.2f : %d",x,ceil,x,round);
    return (0);
}
