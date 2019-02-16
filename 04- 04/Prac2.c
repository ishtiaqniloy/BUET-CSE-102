#include <stdio.h>

int main(){
    int n,line,j;
    scanf("%d",&n);
    for(line=1;line<=n;line++){
        for(j=1;j<=n-line;j++){
            printf(" ");
        }
        for(j=1;j<=2*line-1;j++){
            printf("*");
        }
        printf("\n");
    }

    return(0);
}
