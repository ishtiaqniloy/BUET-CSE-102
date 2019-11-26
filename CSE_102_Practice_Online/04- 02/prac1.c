#include <stdio.h>

int testBit(int n, int b){
    int r, mask=1;
    mask=mask<<b;
    r=mask&n;
    if(r!=0){
        r=1;
    }
    return r;
}

void printBinary(int n){
    int size,i,p;
    size=8*sizeof(int);
    for (i=size-1;i>=0;i--){
        p=testBit(n,i);
        printf("%d",p);
        if(i%4==0){
                printf(" ");
        }
    }
    printf("\n");
}

int setBit(int n, int b){
    int m=1, r;
    m=m<<b;
    r=m|n;
    return r;
}

int invertBit(int n, int b){
    int bit,m=1,r;
    bit= testBit(n,b); //only   r=n^m;
    if(bit==0){
        m=m<<b;
        r=m|n;
    }
    else{
        m=m<<b;
        m=~m;
        r=n&m;
    }
    return r;
}

int main(){
    int n,b,bit,set,invert;
    scanf("%d %d",&n,&b);

    bit=testBit(n,b);
    printf("%dth bit=%d\n",b,bit);

    printBinary(n);

    set=setBit(n,b);
    printf("after setting %dth bit=>%d\n",b,set);

    invert=invertBit(n,b);
    printf("after inverting %dth bit=>%d\n",b,invert);

    return 0;
}
