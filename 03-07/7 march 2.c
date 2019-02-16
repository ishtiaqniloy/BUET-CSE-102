#include<stdio.h>
int main(){
    int d1,m1,y1,d2,m2,y2,diff,d,m,y;
    scanf("%d %d %d",&d1,&m1,&y1);
    printf("\n");
    scanf("%d %d %d",&d2,&m2,&y2);
    d1=d1+m1*30+y1*365;
    d2=d2+m2*30+y2*365;
    diff=d2-d1;
    y=diff/365;
    diff=diff%365;
    m=diff/30;
    d=diff%30;
    printf("%d year %d month %d days",y,m,d);
    return(0);

}

