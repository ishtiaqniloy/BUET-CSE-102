#include <stdio.h>

int main(){
    int num, round, temp_round;
    float  temp_num;
    scanf("%d",&num);
    temp_num=num/10.0;
    temp_num+=0.5;
    temp_round=temp_num;
    round=temp_round*10;
    printf("%d",round);
    return main();
}
