#include <stdio.h>

int main(){
    int n,i,j,flag=0;
    scanf("%d",&n);
    int a[n][n];

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
/*
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    */

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i][j]!=0){
                flag=1;
                break;
            }
        }
        if(flag==1) break;
    }

    if(flag==0){
        for(i=0;i<n;i++){
            for(j=0;j<=i;j++){
                if(a[i][j]==0){
                    flag=1;
                    break;
                }
            }
            if(flag==1) break;
        }
    }

    if(flag==0){
        printf("Yes");
    }
    else{
        printf("No");
    }

    return 0;
}

