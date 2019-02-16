#include <stdio.h>

int main(){
    int n,j,i,min,idx,temp;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

/*    for(j=0;j<n;j++){
        min=a[j];
        idx=j;
        for(i=j+1;i<n;i++){
            if(a[i]<min){
                min=a[i];
                idx=i;
            }
            temp=a[j];
            a[j]=a[idx];
            a[idx]=temp;
        }
    }

    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
*/
    for(i=1;i<n-1;i+=2){
        if (a[i]>a[i-1]){
            temp=a[i];
            a[i]=a[i-1];
            a[i-1]=temp;
        }
       else if(a[i]<a[i+1]){
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }

    }

    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    return 0;
}
