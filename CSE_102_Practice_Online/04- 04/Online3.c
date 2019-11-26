#include <stdio.h>

int main(){
    int n,line,i;
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i++){
        printf("*");
    }
    printf("\n");
    for(line=2;line<=n;line++){
        for(i=1;i<=line-1;i++){
            printf(" ");
        }
        printf("*");
        for(i=1;i<=2*(n-line)-1;i++){
            printf(" ");
        }
        if(line!=n){
            printf("*\n");
        }
    }
    return(0);
}
