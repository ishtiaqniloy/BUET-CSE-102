#include<stdio.h>

int main(){
    int n,count=0,i,j;
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        j=i;
        while(j%5==0){
            count+=1;
            j/=5;
        }
    }
    printf("Number of zero= %d",count);
    return(0);
}
