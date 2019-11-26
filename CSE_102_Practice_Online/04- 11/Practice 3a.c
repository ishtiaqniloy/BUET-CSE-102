#include <stdio.h>

int isPrime(int n);

int main(){
    int p;
    scanf("%d",&p);
    if(isPrime(p)==0){
        printf("Not a prime number\n");
    }
    else{
        printf("Prime number\n");
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
