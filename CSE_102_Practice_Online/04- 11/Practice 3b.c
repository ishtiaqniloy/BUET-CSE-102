#include <stdio.h>

int nthFibonacci(int n);

int main(){
    int f;
    scanf("%d",&f);
    printf("%d\n",nthFibonacci(f));

    return main();
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
