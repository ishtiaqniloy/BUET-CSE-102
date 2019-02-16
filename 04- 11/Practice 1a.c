#include <stdio.h>

double power(int x, int y);

int main() {
    int a, b;
    double result;
    scanf("%d %d",&a,&b);
    result=power(a,b);
    printf("\n%f\n",result);
    return main();
}

double power(int x, int y){
    double result;
    int i;
    if(x==0){
        result=0;
    }
    else if(y==0){
        result=1;
    }
    else if(y>0){
        result=x;
        for(i=2;i<=y;i++){
            result*=x;
        }
    }
    else if(y<0){
        result=1.0;
        for(i=1;i<=-y;i++){
            result/=x;
        }
    }

    return result;
}
