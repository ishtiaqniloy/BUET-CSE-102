#include<stdio.h>

int main(){
    int a,b,c,temp,i,n;
    scanf("%d %d %d",&a,&b,&c);
    scanf("%d",&n);
    printf("%d %d %d ",a,b,c);
    for(i=3;i<=n;i++){
        temp=c+b-a;
        printf("%d ",temp);
        a=b;
        b=c;
        c=temp;


    }
    return(0);
}
