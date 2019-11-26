#include<stdio.h>

int main(){
    int num1,num2,d11,d12,d21,d22;
    scanf("%d %d",&num1,&num2);
    d11=num1/10;
    d12=num1%10;
    d21=num2/10;
    d22=num2%10;
    if(d11==0){
        if(d12==d21||d12==d22)
            printf("Yes");
        else
            printf("No");
    }
    else if(d21==0){
        if(d11==d22||d12==d22){
            printf("Yes");
        }
        else
            printf("No");
    }
    else if(d11==d21||d11==d22||d12==d21||d12==d22){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return(0);
}
