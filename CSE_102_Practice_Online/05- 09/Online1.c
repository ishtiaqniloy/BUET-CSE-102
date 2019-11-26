#include<stdio.h>

int testBit(int n, int b);

void printBinary(int n){
    int size,i,p,mask;
    size=8*sizeof(int);
    for (i=size-1;i>=0;i--){
        mask=1<<i;
        p=(mask&n)?1:0;     //p is the ith bit of n
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

int resetBit(int n, int b){
    int m=1,r;
    m=m<<b;
    m=~m;
    r=m&n;
    return r;
}

int justLarger(int n){
    int i,j,count=0,bit,pos,result;  //count holds number of 1's before 0
                                    //pos is the position of 1st 0 after 1
                                    //bit is a variable for testing ith bit
    for(i=0;i<sizeof(int)*8;i++){
        bit=testBit(n,i);
        if(bit==1){
            count=1;
            for(j=i+1;j<sizeof(int)*8;j++){
                bit=testBit(n,j);
                if(bit==1){
                    count++;
                }
                else{
                    pos=j;
                    break;  //breaking inner loop
                }

            }
            break;          //breaking outer loop
        }

    }

    result=n;

//  printf("position=%d,count=%d\n",pos,count);


    for(i=0;i<count-1;i++){
        result=setBit(result,i);
    }
    for( ;i<pos;i++){
        result=resetBit(result,i);
    }
    result=setBit(result,pos);
    return result;
}

int main(){
    int n,b,set,reset,i,j,result;
    scanf("%d",&n);
/*
    scanf("%d",&b);
    printBinary(n);

    set=setBit(n,b);
    printf("After setting %dth bit of %d: %d\n",b,n,set);

    reset=resetBit(n,b);
    printf("After resetting %dth bit of %d: %d\n",b,n,reset);
*/
    result=justLarger(n);
//    printBinary(result);
    printf("The just larger integer of %d is %d",n,result);

    return 0;
}



int testBit(int n, int b){
    int r, mask=1;
    mask=mask<<b;
    r=mask&n;
    if(r!=0){
        r=1;
    }
    return r;
}
