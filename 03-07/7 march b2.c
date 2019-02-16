#include<stdio.h>
int main(){
    int date, day, date2, day2;
    scanf("%d %d",&date,&day);
    scanf("%d",&date2);
    day2=date2-date+day;
    day2=(day2+35)%7;
    printf("%d",day2);
    return(0);
}
