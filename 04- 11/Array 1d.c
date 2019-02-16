#include <stdio.h>

int main(){
    int n,i,j,count,idx,max;
    scanf("%d",&n);
    int a[n];
    count=n;
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        max=a[i];
        idx=i;
        for(j=i+1;j<n;j++){
            if(max<a[j]){
                max=a[j];
                idx=j;
            }
        }
        a[idx]=a[i];
        a[i]=max;

    }
    for(i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            count--;
        }
    }
    printf("Unique elements = %d",count);
    return 0;
}
