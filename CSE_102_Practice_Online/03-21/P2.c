#include <stdio.h>

int main(){
    int x,n,i,j,sum=1,add=1;
    scanf("%d %d",&x,&n);
    printf("1");
    for(i=1;i<=n;i++){
        printf(" + %d^%d",x,i);
        add*=x;
        sum+=add;

    }
    printf(" = %d",sum);

    return 0;
}
