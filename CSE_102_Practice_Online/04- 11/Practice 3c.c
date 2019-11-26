#include <stdio.h>

int isPrime(int n);
int nthFibonacci(int n);

int main(){
    int k,i,f,count,flag=0;
    scanf("%d",&k);
    for(i=3,count=0;count<k;count++){
        flag=0;
        while(flag==0){
            f=nthFibonacci(i);
            if(isPrime(f)==1){
                printf("%d\n",f);
                flag=1;
            }
            i++;
        }
    }

    return main();
}

int isPrime(int n){
    int result=1,i;
    if(n==0||n==1){
        result=0;
    }
    else{
        for(i=2;i*i<=n;i++){
            if(n%i==0){
                result=0;
                break;
            }
        }
    }
    return result;
}

int nthFibonacci(int n){
    int result,i,a=0,b=1,temp;
    if (n==0){
        b=0;
    }
    else{
        for(i=2;i<=n;i++){
            temp=a+b;
            a=b;
            b=temp;
        }
    }
    return b;
}
