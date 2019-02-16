#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int m,n,i,j,mul,k;
    scanf("%d %d",&m,&n);           //m rows and n columns
    int a[m][n];

    for(i=0;i<m;i++){               //scanning elements of the array
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }


/*    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    */

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(a[i][j]==0){
                for(k=0;k<n;k++){           //temporarily turning other elements of the respective row to -1
                    if(k!=j&&a[i][k]!=0){
                        a[i][k]=-1;
                    }
                }
                for(k=0;k<m;k++){
                    if(k!=i&&a[k][j]!=0){
                        a[k][j]=-1;          //temporarily turning other elements of the respective column to -1

                    }
                }

            }
        }
    }


    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(a[i][j]==-1){            //temporarily changed elements are now changed to 0
                a[i][j]=0;

            }
        }
    }

    for(i=0;i<m;i++){                      //printing elements of the changed array
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }



    return main();
}

