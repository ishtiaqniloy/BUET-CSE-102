#include<stdio.h>
int main(){
    int a,b,c,x;
    scanf("%d %d %d",&a,&b,&c);
    x=c;
    c=b;
    b=a;
    a=x;
    printf("a= %d\nb= %d\nc= %d\n",a,b,c);
    return(0);

}
