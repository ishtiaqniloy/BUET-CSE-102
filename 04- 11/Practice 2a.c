#include <stdio.h>

int testPowTwo(int x);

int main(){
    int a;
    scanf("%d",&a);
    if(testPowTwo(a)==0){
        printf("Not power of 2\n");
    }
    else{
        printf("Power of 2\n");
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
