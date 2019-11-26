#include<stdio.h>

int main(){
    int n,count=0,i;
    scanf("%d",&n);
    for(i=5;i<=n;i*=5){
        count+=n/i;
    }

    printf("Number of zero= %d",count);
    return(0);
}
