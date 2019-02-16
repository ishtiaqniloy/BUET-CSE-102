#include <stdio.h>

int main(){
    int x,n,i,j,fact=1;
    float sum=1.0,m1=1.0,m2=1.0;
    scanf("%d%d",&x,&n);
    for(i=1;i<=n;i++){
        if(i%2==0){
            m1=1.0;
        }
        else{
            m1=-1.0;
        }
        m2*=x;
        fact*=i;
        sum+=1.0*m1*m2/fact;
    }
    printf("Sum=%f\n",sum);



    return(0);
}
