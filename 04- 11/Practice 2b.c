#include <stdio.h>

int testPowTwo(int x);

int main(){
    int a,b,i;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++){
    if(testPowTwo(i)==1){
        printf("%d\n",i);
    }
    }
    return main();
}

int testPowTwo(int x){
    int result=0,test;
    for(test=2; test<=x;test*=2){
        if(test==x){
            result=1;
            break;
        }
    }

    return result;
}

