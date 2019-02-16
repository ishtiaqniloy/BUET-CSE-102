#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int m,n,i,j,k;
    scanf("%d %d",&m,&n);           //m rows and n columns
    int a[m][n],b[m][n];

    for(i=0;i<m;i++){               //scanning elements of the array
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<m;i++){               //copying 1st array to another
        for(j=0;j<n;j++){
            b[i][j]=a[i][j];
        }
    }


    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(a[i][j]==0){
                for(k=0;k<n;k++){           //turning elements of the respective row to 0
                    b[i][k]=0;
                }
                for(k=0;k<m;k++){
                    b[k][j]=0;              //turning elements of the respective column to 0
                }

            }
        }
    }

    for(i=0;i<m;i++){                      //printing elements of the changed array
        for(j=0;j<n;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }



    return 0;
}
