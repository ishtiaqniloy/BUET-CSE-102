#include <stdio.h>

int main(){
    int n,i,mul=1;
    scanf("%d",&n);
    int a[n];
    int b[n];
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
        mul*=a[i];
    }

    for(i=0;i<n;i++){
        b[i]=mul/a[i];
    }


    for(i=0;i<n;i++){
        printf("%d\n",b[i]);
    }

    return 0;
}
