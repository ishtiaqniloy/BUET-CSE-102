#include <stdio.h>

int main(){
    int x,y,n1=0,n2=1,temp=0;
    scanf("%d %d",&x,&y);
    if(x==0){
        printf("%d ",n1);
    }
    if(x<=1){
        printf("%d ",n2);
    }
    while(n2<=y){
        temp=n1+n2;
        if(temp>=x&&temp<=y){
            printf("%d ",temp);
        }
        n1=n2;
        n2=temp;
    }
    return (0);
}
