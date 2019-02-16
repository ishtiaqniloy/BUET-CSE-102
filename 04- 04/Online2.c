#include <stdio.h>

int main(){
    int sum,count=1,n=0,num=0,m=1,i;
    while(n>=0){
        scanf("%d",&n);
        num+=n*m;
        m*=10;
        count++;
    }
    for(m=2,i=1;i<count;i++){
        sum+=num/10*m
    }



    return(0);
}
